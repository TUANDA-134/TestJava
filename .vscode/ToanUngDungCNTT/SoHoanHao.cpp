#include <iostream>
using namespace std;
#include <string>
int main()
{
    int n = 0;
    cout<<"Nhap n ";
    cin>>n;
    int tong=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            tong+=i;
        }
    }
    if(tong == n){
        cout<<n<<" la so hoan hao";
        return 0;
    }
    cout<<n<<" khong la so hoan hao";
}