/*---------------------------------------------------
 *---------------------------------------------------
 *
 * File Name : binarysearch_no_bug.cpp
 *
 * Purpose   :
 *
 * Creation Date: 09-05-2013
 * Last Modified: Thu May  9 10:15:55 2013
 *
 * Created By: wens
 *
 *
 *--------------------------------------------------
 *--------------------------------------------------*/

#include <iostream>

using namespace std;

#define KEY_NOT_FOUND -1

int binarysearch_no_bug(int a[], int key, int min, int max)
{
    while (min <= max)
    {
        int mid = min + (max - min)/2;
        
        if (mid == key)
            return mid;
        else if (mid < key)
            min = mid + 1;
        else
            max = mid - 1;
    }
    
    return KEY_NOT_FOUND;
    
}