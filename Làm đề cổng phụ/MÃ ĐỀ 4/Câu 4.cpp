#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void Nhap(float &x, int &n, int &m);
float TinhL(int n,int m);
float TinhP(float x, int n);
int main(){
    float x;
    int n,m;
    Nhap(x,n,m);
    cout<<TinhL(n,2*m)<<endl;
    cout<<TinhP(x,n)<<endl;
    return 0;
    
    
}
void Nhap(float &x, int &n, int &m){
    cin>>x>>n>>m;
}
float TinhL(int n,int m){
    if (1/(n+m)+n<0){
        return 0;
    }
    else{
    return sqrt(1/(n+m)+n);
    }
}
float TinhP(float x, int n){
    float P = 9*exp(n*x);
    for(int i = 1;i<=n;i++){
        P += pow(2,i)/(i*2+1);
    }
    return P;
}
