//
//  makeargv.c
//  recipes
//
//  Created by wengqiang on 19/6/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//


#include <stdio.h>
#include <ctype.h>


void makeargv(char *string, char *argv[], int argvsize)
{
    char *ptr = string;
    int argc = 0;
    
    for (int i = 0; i < argvsize; ++i)
    {
        
        
        //skip leading space
        while (isspace(*ptr))
        {
            ptr++;
        }
        
        if (*ptr != '\0')   argv[argc++] = ptr;
        else
        {
            argv[argc] = ptr;
            break;
        }

        
        //scan over arg
        while (*ptr != '\0' && !isspace(*ptr))
        {
            ptr++;
        }
        
        //terminate arg
        if (*ptr != '\0' && i < argvsize - 1)   *ptr++ = '\0';

        
        
    }
    
    
}

