#include <iostream>
#include <math.h>
using namespace std;
// Khai bao ham
float TinhKhoangCach(float x1,float x2, float y1, float y2);
float ChuViTamGiac(float x1,float x2, float x3, float y1, float y2, float y3);
//Ham chinh
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<ChuViTamGiac(x1,x2,x3,y1,y2,y3);
    return 0;
}
// Ham nhap 
void Nhap(float &x, float &y){
    cin>>x;
    cin>>y;
}
// Ham tinh do dai canh
float TinhKhoangCach(float x1,float x2, float y1, float y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));

}
// Ham tinh chu vi tam giac
float ChuViTamGiac(float x1,float x2, float x3, float y1, float y2, float y3){
    Nhap(x1,y1);
    Nhap(x2,y2);
    Nhap(x3,y3);
    return TinhKhoangCach(x1,y1,x2,y2)+TinhKhoangCach(x2,y2,x3,y3)+TinhKhoangCach(x3,y3,x1,y1);
}

