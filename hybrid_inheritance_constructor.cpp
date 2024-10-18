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
class B{
    public:
    B(int a, int b)
    {
        int mul=a*b;
        cout<<"multiplication of a and b = "<<mul<<endl;
    }

};
class C:public A,public B{
    public:
    C(int a, int b):A(a,b),B(a,b)
    {
        if(b!=0)
        {
        int div=a/b;
        cout<<"division of a and b = "<<div<<endl;
        }
        else{
            cout<<"division by "<<b<<" is not possible"<<endl;
        }
    }
};
class D:public C{
    public:
    D(int a, int b):C(a,b)
    {
        int sub=a/b;
        cout<<"substraction of a and b = "<<sub<<endl;
    }

};
class E:public  C{
    public:
    E(int a, int b):C(a,b)
    {
        int mul=a*b+1;
        cout<<"multiplication of a and b +1 = "<<mul<<endl;
    }

};
int main()
{
   int a,b;
   cout<<"enter value of a ,b: ";
   cin>>a>>b;
//    D  obj(a,b);
   E obj(a,b);
  return 0;
}