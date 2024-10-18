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
        cout<<"multiplication of a and b = "<<mul<<endl;
    }

};
class C:public A{
    public:
    C(int a, int b):A(a,b)
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
class D:public A{
    public:
    D(int a, int b):A(a,b)
    {
        int sub=(a-b);
        cout<<"substraction of a and b = "<<sub<<endl;
    }

};
int main()
{
   int a,b;
   cout<<"enter value of a ,b: ";
   cin>>a>>b;
//    B obj1(a,b);
    // C obj2(a,b);
   D obj3(a,b);
  return 0;
}