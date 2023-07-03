#include <iostream>
using namespace std;

int main()
{
    int a,n,dudoan;
    int b[n];
    cout<<"Nhap vao so phan tu cua day so: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua day so: "<<endl;
        cin>>a;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if (b[i]<=b[j])
            {
                dudoan=0;
            }
            else if (b[i]>=b[j])
            {
                dudoan=1;
            }
            else if (b[i]<b[j])
            {
                dudoan=2;
            }
            else
            {
                dudoan=3;
            }
        }
    }
    cout<<dudoan<<endl;
    if(dudoan==0)
    {
        cout<<"Day sap tang.";
    }
    else if(dudoan==1)
    {
        cout<<"Day sap giam.";
    }
    else if(dudoan==2)
    {
        cout<<"Day tang ngat."; 
    }
    else
    {
        cout<<"Day giam ngat.";
    }
    return 0;
}
