//
//  algorithm.cpp
//  recipes_working
//
//  Created by wens on 9/17/14.
//  Copyright (c) 2014 wens. All rights reserved.
//

#include "algorithm.h"
#include <algorithm>

namespace wens
{
    
    //my quick sort algorithm
    void quick_sort(int a[], int s, int e)
    {
        if (s < e)
        {
            int p = partition(a, s, e);
            
            quick_sort(a, s, p - 1);
            quick_sort(a, p + 1, e);
            
        }
    }
    
    int partition(int a[], int s, int e)
    {
        int pivot = a[e];
        
        int i = s - 1;
        
        for (int j = s; j < e; ++j)
        {
            if (a[j] <= pivot)
            {
                i++;
                std::swap(a[i], a[j]);
            }
            
        }
        
        std::swap(a[i + 1], a[e]);
        return i + 1;
    }
    
    //next permutation
    void nextPermutation(std::vector<int>  &num)
    {
        int size = num.size();
        
        //special condition
        if (size == 0 || size == 1)
            return;
        
        int i = size - 1;
        
        
        while (true)
        {
            int ip1 = i;
            //get the target for next permutation
            if (num[--i] < num[ip1])
            {
                int j = size;
                //get first value that bigger than target
                while (num[--j] <= num[i])
                    ;
                
                std::swap(num[i], num[j]);
                std::reverse(num.begin() + ip1, num.end());
                
                break; //has get next permutaion, break
                
            }
            
            //reached first one; no next permutation, so just reverse it
            if (i == 0)
            {
                std::reverse(num.begin(), num.end());
                return;
            }
            
        }
    }
}