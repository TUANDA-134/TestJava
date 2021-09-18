#include<iostream>
#include<iomanip>
using namespace std;
bool SoNguyenTo(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<"Nhap n ";
    int n=0;
    cin>>n;
    int *array = new int[n+1];
    for(int i=0;i<=n;i++){
        array[i]=0;
    }
    for(int i=2;i<=n;i++)
    {
        if(array[i]>0)
        continue;
        if(SoNguyenTo(i))
        {
            for(int j = i*2;j<=n;j+=i)
            {
                // if(array[j]>0) continue;
                array[j]=i;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<setw(3)<<i ;
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
        cout<<setw(3)<<array[i];
    }
}
