#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    cout<<gcd(80,60)<<" "<<lcm(80,60);
    unsigned int i = 123456789;
    cout<<i*i*2;
}