//
//  判断一个数是不是素数.c
//  recipes
//
//  Created by wengqiang on 20/6/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//

#include <stdio.h>

/*
定理: 如果p是一个素数, 则对于 1 =< a < p,
 		a的p-1次方  (同余)  1 (mod p)
 
但是对于非素数561同样满足上述公式.

function primality(N)
input: positive integer N
output: yes/no

pick a positive integer a < N at random

if power(a, N-1) 同余 1 mod (N)
	return yes
else
    return no
 */
