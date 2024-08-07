#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int *a, int &n){
    cin>>n;
    cout<< "Nhap vao mang a: "<<endl;
    for (int i = 0; i<n; i++){
        cout<<"Nhap phan tu thu "<<i+1<<endl;
        cin>> *(a+i);
    }
}
void Chan(int*a, int n){
    cout<< "Cac phan tu chan trong mang la: "<<endl;
    for(int i = 0; i < n; i++){
        if (*(a+i) %2 == 0){
        cout<<a[i]<<" ";
        }
    }
}
void Xoa(int *a, int n){
    int x;
    cout<<"\nNhap vao phan tu muon loai bo: "<<endl;
    cin>>x;
    cout<< "Sau khi loai bo phan tu "<<x<<" trong mang, ta duoc: "<<endl;
    for(int i = 0; i < n; i++){
        if (*(a+i) == x){
        continue;
        }
        else
        cout<< a[i]<<" ";
    }
}
int LonNhat(int *a, int n){
    int  lonnhat;
    for (int i = 0;i<n;i++){
        for (int j=1; j<n; j++){
            if (a[i] < a[j]){
                lonnhat = a[j];
            }
        }
    }
    int c = 0;
    for (int i = 0; i<n;i++){
    	if (*(a+i) == lonnhat){
    		c++;
		}
	}
	    cout<<"\nSo phan tu lon nhat trong mang la: ";
    return c;
}    
int main(){
    int n;
    int *a = new int[n];
    Nhap(a,n);
    Chan(a,n);
    Xoa(a,n);
    cout<< LonNhat(a,n);
    delete[]a;
    return 0;
}

