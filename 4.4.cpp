#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Nhap vao so phan tu cua mang: ";
    cin>>a;
    int x[a];
    for(int i = 0; i<a;i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua x: ";
        cin>>x[i];
    }
    for(int i=0; i<a;i++)
    {
        for (int j=i+1; j<a;j++)
        {
            if (x[i]>x[j])
            {
                int tg = x[i];
                x[i] = x[j];
                x[j] = tg;
            }
        }
    }
    int tg = x[0];
    x[0] = x[a-1];
    x[a-1] = tg;
    cout<<"Mang da sap x la: ";
    for(int i=0;i<a;i++)
      {  
          cout<<x[i]<<" ";
      }
    return 0;
}

