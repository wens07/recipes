//
//  最简单的getline版本.c
//  recipes
//
//  Created by wengqiang on 10/12/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//

#include <stdio.h>

/**
 *  get line from input
 *
 *  @param line  <#line description#>
 *  @param count <#count description#>
 *
 *  @return <#return value description#>
 */
int getline(char line[], int count)
{
    int c;
    
    //get each character
    for (int i = 0; i < count - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    
    if (c == '\n')
    {
        line[i++] = c;
    }
    
    line[i] = '\0';
    return i;
    
}