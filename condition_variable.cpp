//
//  condition_variable.cpp
//  code_study
//
//  Created by wens07 on 3/5/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <thread>
#include <mutex>
#include <condition_variable>

#include <iostream>

std::condition_variable cv;
std::mutex cv_m;
int i = 0;


void waits()
{
    std::unique_lock<std::mutex> lk(cv_m);
    std::cerr << "Waiting... \n";
    cv.wait(lk);
    std::cerr << "...finished waiting. i == 1\n";
}

void signals()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cerr << "Notifying...\n";
    cv.notify_all();
    
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::unique_lock<std::mutex> lk(cv_m);
    //i = 1;
    std::cerr << "Notifying again...\n";
    cv.notify_all();
}


int main(int argc, const char* argv[])
{
    std::thread t1(waits), t2(waits), t3(waits), t4(signals);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    
    return 0;
}