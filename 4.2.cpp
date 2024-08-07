#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Nhap vao so luong phan tu cua day so: "<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout<<"Day so sau khi sap xep la: ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
