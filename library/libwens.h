#ifndef __libwens__h__
#define __libwens__h__

#include "mathematics.h"
#include "algorithm.h"
#include <vector>


/****************************************************************************
 *
 *	 useful macros and short methods
 ****************************************************************************/
//align macro to alignmen strtuct/class or ptr
#define ngx_align(d, a)     (((d) + (a - 1)) & ~(a - 1))
#define ngx_align_ptr(p, a)                                                   \
    (u_char *) (((uintptr_t) (p) + ((uintptr_t) a - 1)) & ~((uintptr_t) a - 1))

namespace wens
{
    std::vector<int> spiral_output_matrix(std::vector<std::vector<int>> const &v);
    
    //use a temp matrix to hold the result --- time: O(n^2), memeory: O(n^2)
    std::vector<std::vector<int>> rotate_matrix_by_90(std::vector<std::vector<int>> const &v);
    //in-place swap --- time: O(n^2), memory: O(1)
    void rotate_matrix_by_90_inplace(std::vector<std::vector<int>> &v);
    //use tranpose and reverse by matrix rotate definition
    void rotate_matrix_by_90_tranpose(std::vector<std::vector<int>> &v);
    
    //string trim
    char *  trim (char *str);

}

#endif