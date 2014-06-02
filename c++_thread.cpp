//
//  c++_thread.cpp
//  acm_project
//
//  Created by wens07 on 27/5/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <thread>


void hello()
{
    std::cout<<"hello world!"<<std::endl;
}

int main(int argc, const char* argv[])
{
    std::cout<<std::thread::hardware_concurrency()<<std::endl;
    std::thread t(hello);
    t.join();
    
    std::this_thread::get_id();
    std::cout<<"after thread"<<std::endl;
    return 0;
}

