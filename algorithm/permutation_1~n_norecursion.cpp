#include<iostream>
#include<algorithm>
#include<array>

using namespace std;

//use STL algorithm next_permutation
//
void generate_permutation(int n)
{
    array<int, 10> arr = {{1,2,3,4,5}};

    do
    {
        for (int i = 0; i < n; ++i)
            cout<<arr[i]<<" ";
        cout<<endl;
    }while(next_permutation(arr.begin(), arr.begin() + n));

}
int main()
{
    
    
    generate_permutation(4);
    return 0;
}
