#include <iostream>
using namespace std;
int a,b,n;
bool kiemtra(int a,int b ,int n)
{
  if(a>0 && n >0)
  {
    if(b<0)
    return false;
  }
  return true;
}
int mun(int n){
  if(n%2==0){
    return 1;
  }
  return -1;
}
float ketqua()
{
  cout<<"Nhap a";
  cin>>a;
  cout<<"Nhap b";
  cin>>b;
  cout<<"Nhap n";
  cin>> n;
  while(kiemtra(a,b,n))
  {
    cout<<"Nhap lai a";
    cin>>a;
    cout<<"Nhap lai b";
    cin>>b;
    cout<<"Nhap lai n";
    cin>> n;
  }
  float s=0;
  for(int i=0;i<=n;i++)
  {
    s+=(a*a+i)/(b+i+1)*mun(i);
  }
  return s;
}
int main()
{
  float ket_qua = ketqua();
  cout<<"Ket qua la "<<ket_qua;
}