#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
float TinhP(float x);
void Swap(int &n,int &m);
float TinhS(float x, int n);
int main()
{
    float a;
    int b,c;
    cin>>a>>b>>c;
    if (c<b){
        Swap(b,c);
    }
    cout<<TinhS(a,c)-TinhS(a,b);
    return 0;
}
float TinhP(float x){
   return exp(abs(x))+pow(x,5)+sqrt(pow(x,2)+1);
}
void Swap(int &n, int &m){
    int tg;
    tg =n;
    n = m;
    m = tg;
}
float TinhS(float x, int n){
    float S = 100;
    if(x<0){
        return 1;
    }
    else
    for(int i = 1; i<=n;i++){
        S+=(sqrt(pow(x,i)))/(n+i);
    }
    return S;
}



