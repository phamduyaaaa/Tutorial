#include <iostream>
using namespace std;
int Tinh(int n);
int main()
{
    int n;
   cout<<"Nhap vao so thu tu cua so CataLan muon tim: "<<endl;
   cin>>n;
   cout<<"So CataLan cua ban la: ";
   cout<<Tinh(n);
 
   return 0; 
}
int Tinh(int n)
{
    if (n <= 1)
    return 1;
    int a = 0;
    for (int i = 1; i < n; i++)
    a += Tinh(i) * Tinh(n - i);
    return a;
}
