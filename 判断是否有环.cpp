//
//  判断是否有环.c
//  recipes
//
//  Created by wengqiang on 11/5/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//

#include <stdio.h>


//Definition for single-linked list

struct ListNode
{
   int val;
   ListNode *next;
   ListNode(int x):val(x), next(NULL){}
};


ListNode *detectCycle(ListNode *head)
{
    ListNode *p1 = head, *p2 = head;
    
    do
    {
        //have been reach the end of list, no cycle
        if ((p2 == NULL) || p2->next == NULL)   return 0;
        
        p1 = p1->next;
        p2 = p2->next->next;

        
    }while (p1 != p2);
        
    /*
     *code reach here, there is cycle in the list
    */  
        
    //return the start of the cycle
    for (p1 = head; p1 != p2; p1 = p1->next, p2 = p2->next)
        ;
    return p1;
    
}