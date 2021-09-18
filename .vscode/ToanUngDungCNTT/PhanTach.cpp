#include <iostream>
#include <map>
#include <math.h>
using namespace std;
map<int, int> dictionary;
int main(){
    int n = 0;
    cout<<"Vui long nhap n ";
    cin >>n;
    int i=2;
    while (n>1)
    {
        
        if(n%i==0){
            dictionary[i]=dictionary[i]+1;
            if(i==n-1){
                break;
            }
            n/=i;
        }
        else{

            i++;
        }
    }
    for (pair<int,int> x : dictionary) {
        std::cout << x.first << ": " << x.second << '\n';
    }
}