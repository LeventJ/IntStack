#include "Intstack.h"
#include<iostream>
#include<cstdlib>

IntStack::IntStack()
{
    //ctor
}
    void  IntStack:: add(int a){
        num[n]=a;
        n++;
    }
    void IntStack::print(){
        int i;
        for(i=n-1;i>=0;i--)
        {
            std::cout<<"num["<< i<<"]="<<num[i] <<std::endl;
        }
    }
     int IntStack::pop(){
        return num[--n];
    }
IntStack::~IntStack()
{
    //dtor
}
