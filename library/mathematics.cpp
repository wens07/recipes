//
//  mathematics.cpp
//  pat&acm_programming
//
//  Created by wens on 8/7/14.
//  Copyright (c) 2014 wens. All rights reserved.
//  Email:wens.wq@gmail.com
//

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

namespace wens{
	//whether a number is a prime
	bool isPrime(int num)
	{
	    //the smallest prime in integer is 2
	    if (num <= 1)
	        return false;
	    if (num == 2)
	        return true;
    
	    //even that greater 2 cannot be a prime
	    if (num % 2 == 0)
	        return false;
    
	    //from 3 to sqrt(num)
	    for (int i = 3; i <= std::sqrt(num); i += 2) {
        
	        if (num % i == 0)
	            return false;
	    }
    
	    return true;
	}


	//Sieve of Eratosthenes
	//筛法求素数
	void shaifa_prime(int *a, int size)
	{
	    //init all number are prime
	    for (int i = 0; i < size; ++i) {
	        a[i] = 1;
	    }
    
	    // 0 and 1 are not prime
	    a[0] = a[1] = 0;
    
	    for (int i = 2; i < std::sqrt(size); ++i) {
	        //if it is a prime
	        if (a[i] == 1) {
	            for (int j = i * i; j <= size; j += i) {
	                a[j] = 0;
	            }
	        }
	    }
    
	}

	int gcd(int a, int b)
	{
	    if (b > a)
	        std::swap(a, b);
    
	    if (b == 0) {
	        return a;
	    }
    
	    return gcd(b, a%b);
	}
	
}

	


