#include<iostream>
#include<vector>
#include<dlfcn.h>
#include<cstdio>
#include<cstdlib>

using namespace std;

void (*print_vector)(const vector<int>& v);

int main()
{
    void *handle;
    char *error;

    vector<int> v{1, 2, 3, 4, 5, 6};

    //load shared library
    handle = dlopen("libprint.so", RTLD_LAZY);



    //get the function pointer
   print_vector = (void (*)(const vector<int>&))dlsym(handle, "print_vector");
    

    error = dlerror();
    if (error)
    {
        fprintf(stderr, "couldn't find print_vector: %s\n", error);
        exit(1);
    }

    print_vector(v);


}
