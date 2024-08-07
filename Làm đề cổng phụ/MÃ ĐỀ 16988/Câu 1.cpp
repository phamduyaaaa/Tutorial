#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void Nhap(float &x, float &y);
float KhoangCach(float x1, float y1, float x2, float y2);
float TinhF(float x1, float y1, float x2, float y2, int n);
int main(){
	float x1,y1,x2,y2;
	int n;
	cin>>n;
	Nhap(x1,y1);
	Nhap(x2,y2);
	cout<<KhoangCach(x1,y1,x2,y2)<<endl;
	cout<<TinhF(x1,y1,x2,y2,n);
	return 0;
}
void Nhap(float &x, float &y){
	cin>>x>>y;
}
float KhoangCach(float x1, float y1, float x2, float y2){
	return abs(x2-x1)+abs(y2-y1);
}
float TinhF(float x1, float y1, float x2, float y2, int n){
	float F = 2020*n;
	for(int i = 1;i<= n;i++){
	F += pow(KhoangCach(x1,y1,x2,y2),i)/2*i+1; 
}
return F;	
}
