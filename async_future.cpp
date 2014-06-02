//
//  async_future.cpp
//  code_study
//
//  Created by wens07 on 3/5/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <iostream>
#include <thread>
#include <chrono>
#include <future>
#include <random>


using namespace std;

int dosomething(char c)
{
    default_random_engine dre(c);
    uniform_int_distribution<int> di(100, 3000);
    
    for (int i = 0; i < 5; ++i)
    {
        this_thread::sleep_for(chrono::milliseconds(di(dre)));
        cout.put(c).flush();
        
    }
    return c;
}

int func1()
{
    return dosomething('.');
}

int func2()
{
    return dosomething('+');
    
}

int main(int argc, const char* argv[])
{
    
    std::future<int> result1(std::async(func1));
    int resutl2 = func2();
    int result = result1.get() + resutl2;
                            

                             cout<<"func1() + func2()"<<result<<endl;
    
    
    return 0;
}