#include <iostream>
#include <cmath>

using namespace std;
//double Area (double a ,double b,double c);    ������������������ʹ��
//int main(){
//    double Area (double a ,double b,double c);
//    double a,b,c;
//    cout<<"������߳�: a,b,c"<<endl;
//    cin>>a>>b>>c;
//    cout <<"���������Ϊ:" <<Area(a,b,c);
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
    //��ֵ�����ı䣬�βν����ͷ�
    swap1(a,b);
    cout<<"swap1���:"<<a<<b;
    swap2(a,b);
    cout<<"swap1���:"<<a<<b;
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