#include <iostream>
#include <map>
#include <math.h>
using namespace std;
map<int, int> dictionary;
int so=NULL;
void add(int i){
    std::map<int,int>::iterator it;
    dictionary[i]=dictionary[i]+1;
}
int Mu(int n,int m)
{
    return pow(n,m);
}
int SoUocSo()
{
    int s=1;
    if(dictionary.size()==0){
        return 0;
    }
    for(pair<int,int> i : dictionary)
    {
        s*=i.second+1;
    }
    return s;
}
int TongUocSo()
{
    int s = 1;
    for(pair<int,int> i : dictionary)
    {
        s*=(Mu(i.first,i.second+1)-1)/(i.first-1);
    }
    return s;
}
double Tich(){
    return pow(so,SoUocSo()/2);
}
int main()
{
    
    int n=84;
    so = n;
    int i=2;
    while (n>1)
    {
        
        if(n%i==0){
            add(i);   
            if(i==n-1){
                break;
            }
            n/=i;
        }
        else{

            i++;
        }
    }
    for (auto& x: dictionary) {
        std::cout << x.first << ": " << x.second << '\n';
    }
    cout<<"So uoc so = "<<SoUocSo()<<endl;
    cout<<"Tong uoc so = "<<TongUocSo()<<endl;
    cout<<"Tich uoc so = "<<Tich()<<endl;
}
