#include <iostream>
#include <math.h>
using namespace std;
int gt(int n);
int main()
{
    int x,n;
    cout<<"nhap gia tri x: "<<endl;
    cin>>x;
    cout<<"nhap gia tri n: "<<endl;
    cin>>n;
    cout<<"Gia tri cua bieu thuc can tim la: "<<(float)pow(x,n)/gt(n);
    return 0;
}
int gt(int n)
{   
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*gt(n-1);
    }
}
