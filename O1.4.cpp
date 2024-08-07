#include <iostream>
using namespace std;
int dem(float n);
int main()
{
    float n;
    cout<<"Nhap vao 1 so nguyen: "<<endl;
    cin>>n;
    cout<<"So vua nhap la so co: "<<dem(n)<<" chu so.";
    return 0;
}
int dem(float n)
{
   if (n<10)
   {
       return 1;
   }
   else
   {
       return 1+dem(n/10);
   }
}
