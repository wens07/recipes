//
//  algorithm.h
//  recipes_working
//
//  Created by wens on 9/17/14.
//  Copyright (c) 2014 wens. All rights reserved.
//

#ifndef __recipes_working__algorithm__
#define __recipes_working__algorithm__

#include <iostream>
#include <vector>

namespace wens
{
    //my quick_sort algorithm
    void quick_sort(int a[], int s, int e);
    
    int partition(int a[], int s, int e);
    
    //next permutation
    void nextPermutation(std::vector<int> &num);
}

#endif /* defined(__recipes_working__algorithm__) */
