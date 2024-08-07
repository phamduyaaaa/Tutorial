#include <iostream>
#include <math.h>
using namespace std;
int tinh(int x,int n);
int main()
{
    int n,x;
    cout<<"Nhap vao so nguyen x: "<<endl;
    cin>>x;
    cout<<"Nhap vao so nguyen n: "<<endl;
    cin>>n;
    cout<<"Gia tri cua bieu thuc tren la: "<<tinh(x,n);
}
int tinh(int x,int n)
{
    
    if (n==0)
    {
        return 2017;
        
    }
    else
    {
       return pow(x,n)+tinh(x,n-1);
    } 
}
