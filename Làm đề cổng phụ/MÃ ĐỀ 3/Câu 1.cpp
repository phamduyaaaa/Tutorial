#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void Nhap(float &x,int &n, int &m);
float TinhH(int n, int m);
float TinhT(float x, int n);
int main(){
    int m,n;
    float x;
    Nhap(x,n,m);
    cout<<"Gia tri cua H la: "<<TinhH(n,m)<<endl;
    cout<<"Gia tri cua T la: "<<TinhT(x,n+m)<<endl;
    return 0;
}

//Ham Nhap
void Nhap(float &x,int &n, int &m){
    cin>>x>>n>>m;
}

// Ham Tinh H
float TinhH(int n, int m){
    if(m+1/n <0 || n==0){
    cout<<"Khong ton tai gia tri cua H(n,m)."<<endl;
    return 0;
    }
    else
    return sqrt(m+1/n);  
}

// Ham Tinh T
float TinhT(float x, int n){
    float T = 10*exp(abs(n-5));
    for(int i = 1;i<=2*n+1;i++){
        T +=pow(x,i)/i;
    }
    return T;
}
