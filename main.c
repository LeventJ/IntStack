#include<iostream>
#include<cstdlib>
#include "Intstack.h"
#define SIZE 999
using namespace std;

/*class IntStack{
private:
    int num[SIZE];
    int n=0;
public:
    void add(int a){
        num[n]=a;
        n++;
    }
    void print(){
        int i;
        for(i=n-1;i>=0;i--)
        {
            cout<<"num["<< i<<"]="<<num[i] <<endl;
        }
    }

    int pop(){
        return num[--n];
    }
};
*/
int main(){
    bool isPrime = true;
    int control;
    int number;
    IntStack stack;
    while(isPrime)
    {
        system("cls");
        cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.print all of them"<<endl<<"and other number to quit"<<endl;
        cin>>control;
        switch(control){
        case 1:
            cout<<"input an number"<<endl;
            cin>>number;
            stack.push(number);
            system("pause");
            break;
        case 2:
           cout<<stack.pop()<<"pop"<<endl;
           system("pause");
            break;
        case 3:
            stack.print();
            system("pause");
            break;
        default:
            isPrime=false;
            break;
        }
    }
	return 0;
}
