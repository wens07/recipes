//
//  c++_call_c_func.cpp
//  acm_project
//
//  Created by wens07 on 26/9/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <stdio.h>
#include <iostream>
//#include "/Users/wens07/Desktop/code_study/c++/c_func_for_c++_call.c"

extern "C"
{
    void print();
}

int main()
{
    print();
    return 0;
}
