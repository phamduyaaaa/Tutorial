#include <iostream>
using namespace std;

int main ()
{
    cout<<"Nhap vao so luong phan tu cua day so; "<<endl;
    int n;
    float a,b,c;
    cin>>n;
    for(int i = 1; i<=n;i++)
    {
        cout<<"Nhap phan tu thu "<<i<<endl;
        cin>>a;
        if (b<a)
        {
           b=a; 
        }
        if (c>a)
        {
           c=a; 
        }
    }
    cout<<"Gia tri lon nhat la: "<<b;
    cout<<"Gia tri nho nhat la: "<<c;
    return 0;
}
