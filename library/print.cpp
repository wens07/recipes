#include<iostream>
#include<vector>

using namespace std;

#ifdef __cplusplus
extern "C"
{
#endif





/*template <typename T>
void print_vector(const vector<T>& v)
{
    typename vector<T>::iterator iter = v.begin();

    for (; iter != v.end(); ++iter)
        cout<<*iter<<" ";

    cout<<endl;
}*/

void print_vector(const vector<int>& v)
{
    vector<int>::const_iterator iter = v.begin();

    for (; iter != v.end(); ++iter)
        cout<<*iter<<" ";

    cout<<endl;
}

#ifdef __cplusplus
}
#endif

