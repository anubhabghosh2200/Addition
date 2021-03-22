#include<iostream>
using namespace std;
class addition
{
public:
int add(int,int);
};
int addition::add(int a, int b)
{
cout<<"Enter the value of first number and second number"<<endl;
cin>>a>>b;
return (a+b);
}
int main()
{
addition a;
cout<<"The sum of two number is: "<<a.add(5,1);
return 0;
}

