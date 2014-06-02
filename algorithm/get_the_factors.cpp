//
//  get_the_factors.cpp
//  acm_project
//
//  Created by wens on 12/20/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <stdio.h>

using namespace std;

int main()
{
    int number;
    printf("cin the number:\n");
    scanf("%d", &number);
    
    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            printf("%d*", i);
            number /= i;
            
        }
    
    }
    printf("%d\n", number);
}
//this line added to learn git
