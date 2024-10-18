#include<iostream>
using namespace std;
class A{
public:
A(int a,int b)
{
        int sum=a+b;
    cout<<"sum of a and b= "<<sum<<endl;
}
};
class B:public A{
    public:
    B(int a, int b):A(a,b)
    {
        int mul=a*b;
        cout<<"multiplication of a and b = "<<mul;
    }

};
int main()
{
   int a,b;
   cout<<"enter value of a ,b: ";
   cin>>a>>b;
B obj(a,b);
    return 0;
}