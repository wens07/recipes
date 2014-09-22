//
//  rotate_matrix_by_90.cpp
//  pat_acm_programming
//
//  Created by wens on 8/13/14.
//  Copyright (c) 2014 wens. All rights reserved.
//  Email:wens.wq@gmail.com
//

#include <cstdio>
#include <vector>

using namespace std;

//Rotate by +90:
//
//Transpose
//Reverse each row
//Rotate by -90:
//
//Transpose
//Reverse each column
//Rotate by +180:
//
//Method 1: Rotate by +90 twice
//
//Method 2: Reverse each row and then reverse each column
//
//Rotate by -180:
//
//Method 1: Rotate by -90 twice
//
//Method 2: Reverse each column and then reverse each row
//
//Method 3: Reverse by +180 as they are same

namespace wens
{
    //use a temp matrix to hold the result --- time: O(n^2), memeory: O(n^2)
    vector<vector<int>> rotate_matrix_by_90(vector<vector<int>> const &v)
    {
        auto n = v.size();
        vector<vector<int>> result{v};
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                result[i][j] = v[n - 1 - j][i];
            }
        }
        
        return result;
    }
    
    //in-place swap --- time: O(n^2), memory: O(1)
    void rotate_matrix_by_90_inplace(vector<vector<int>> &v)
    {
        auto n = v.size();
        
        for (int i = 0; i < n/2; ++i)
        {
            for (int j = i; j < n - 1 - i; ++j)
            {
                int tmp = v[i][j]; //store top element
                v[i][j] = v[n - 1 - j][i]; // left - top
                v[n - 1 - j][i] = v[n - 1 -i][n - 1 - j]; // bottom - left
                v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i]; // right - bottom
                v[j][n - 1 - i] = tmp; //top -- left
            }
        }
        
    }
    
    //use tranpose and reverse by matrix rotate definition
    void rotate_matrix_by_90_tranpose(std::vector<std::vector<int>> &v)
    {
        auto rowlen = v[0].size();
        auto columnlen = v.size();
        
        //tranpose the matrix
        for (int i = 0; i < rowlen; ++i)
        {
            for (int j = i + 1; j < columnlen; ++j)
            {
                std::swap(v[i][j], v[j][i]);
            }
        }
        
        //reverse the row
        for (int i = 0; i < rowlen; ++i)
        {
            for (int j = 0; j < columnlen/2; ++j)
            {
                std::swap(v[i][j], v[i][columnlen - 1 - j]);
            }
        }
    }
    
    
    
    


}
