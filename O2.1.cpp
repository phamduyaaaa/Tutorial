#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n;
    cout<<"Nhap vao so doi tham gia: "<<endl;
    cin>>n;
    cout<<"Nhap vao so tran: "<<endl;
    cin>>m;
    cout<<"Nhap so diem tung doi qua tung tran dau"<<endl;
    cout<<"Thang 2, Hoa 1, Thua 0"<<endl;
    int a[n][m];
    int S;
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<m;i++)
    {
        cout<<"Nhap ket qua tran "<<i+1<<" doi "<<j<<" la: "<<endl;
        cin>>a[i][j];
    }
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<m;i++)
        {
            S =a[i][j] + a[i][j];
        }
        cout<<"\n";
    }
    cout<<S;
    return 0;
}
