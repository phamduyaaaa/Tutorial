#include <iostream>

using namespace std;
int gt(int n);
int main()
{
    int a,b;
    cout<<"nhap gia tri a: "<<endl;
    cin>>a;
    cout<<"nhap gia tri b: "<<endl;
    cin>>b;
    cout<<"Gia tri cua bieu thuc can tim la: "<<(float)(gt(a)+gt(b))/gt(a+b);
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


