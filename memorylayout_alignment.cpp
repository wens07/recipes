//
//  memorylayout_alignment.cpp
//  code_study
//
//  Created by wens07 on 5/5/13.
//  Copyright (c) 2013 wens07. All rights reserved.
//

#include <iostream>

using namespace std;

class Concrete
{
public:
    int i;
    char c;
};


class Concrete2:public Concrete
{
public:
    char c2;
};

class Concrete3:public Concrete2
{
public:
    char c3;
};



class Shape
{
public:
    virtual void print();
    
private:
    int x;
    int y;
};

class Another
{
public:
    virtual void result();
    int a;
};

class Circle : public Shape, Another
{
public:
    virtual void temp();

    
};


int main(int argc, const char* argv[])
{

    
    cout<<sizeof(Shape)<<endl;
    
    cout<<sizeof(Circle)<<endl;
    

    
    return 0;
}