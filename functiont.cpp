#include <iostream>
#include <cmath>

using namespace std;
//double Area (double a ,double b,double c);    反正就是先声明，再使用
//int main(){
//    double Area (double a ,double b,double c);
//    double a,b,c;
//    cout<<"请输入边长: a,b,c"<<endl;
//    cin>>a>>b>>c;
//    cout <<"三角形面积为:" <<Area(a,b,c);
//    return 0;
//}
//double Area(double a,double b,double c){
//    double p,s;
//    p=(a+b+c)/2;
//    s =sqrt(p*(p-a)*(p-b)*(p-c));
//    return s;
//}
int swap1(int a,int b);
int swap2(int &a,int &b);
int main(){
    int a,b;
    cin>>a>>b;
    //传值，不改变，形参结束释放
    swap1(a,b);
    cout<<"swap1结果:"<<a<<b;
    swap2(a,b);
    cout<<"swap1结果:"<<a<<b;
}
int swap1(int a,int b){
    int temp ;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int swap2(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}