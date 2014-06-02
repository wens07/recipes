//
//  mutex_lock.cpp
//  code_study
//
//  Created by wens07 on 3/5/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <iostream>
#include <thread>
#include <mutex>
#include <string>


std::mutex printmutex;


void printstring(const std::string& s)
{
    std::lock_guard<std::mutex> lg(printmutex);
    std::cout<<s<<std::endl;
}

int main(int argc, const char* argv[])
{
    std::thread th1(printstring, "the thread1");

    std::thread th2(printstring, "the thread2");
    
    std::thread th3(printstring, "the thread3");
    
    printstring("the main thread");
    return 0;
}
