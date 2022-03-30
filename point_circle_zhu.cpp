// point_circle_zhu.cpp created on 22:08.
// Created by praguetramp on 2022/3/24.
//
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class point{
    int x,y;
public:
    point(int =0,int=0);
    point(){}
    //���캯��
    void setpoint(int ,int); //��������
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void print();
};
point::point(int a,int b){
    setpoint(a,b);
}
void point::setpoint(int a,int b){
 x=a;
 y=b;
}
void point::print() {
    cout<<"center:x and y:"<<x<<y<<endl;
}
class circle :public point{
    double r;
public:
    circle(int x=0,int y=0,double r=0.0);
    void setr(double);
    double getr();
    double area();
    void print();
};
circle::circle(int a,int b,double r): point(a,b){ setr(r);};
void circle::setr(double r){this->r=(r>=0?r:0);};
double circle::getr() {return r;};
double circle::area(){return 3.14*r*r;};
void circle::print() {
    cout<<"center =";
    point::print();
    cout<<":radius ="<<r<<endl;
}

class cylinder: public circle{
    double high;
public:
    cylinder(int x,int y,double r, double h);
    void set_data(int x,int y ,double r,double h);
    double area();
    double volume();
    void print();
};
cylinder::cylinder(int x, int y, double r, double h): circle(x,y,r){
    high=h;
}
void cylinder::set_data(int x, int y, double r, double h) {
    setpoint(x,y);
    setr(r);
    high =h;
}

double cylinder::volume() {
    return circle::area()*high;
}
double cylinder::area(){
    double  r =getr();
    return 2*3.14*r*r*+2*3.14*r*high;
}
int main(){
    cout<<"������"<<endl;
    point p(30,50);
    p.print();
    cout<<endl<<endl<<"����Բ��"<<endl;
    circle c(120,80,10.0);
    cout<<"Բ��:";
    c.point::print();
    cout<<"\nԲ�����:"<<c.area()<<endl;
    cout<<endl<<"����Բ������:"<<endl;
    cylinder cy(240,160,10.0,10.0);
    cout<<"Բ�������ĵ�:";
    cy.point::print();
    cout<<"\nԲ����Բ���:"<<cy.circle::area()<<endl;
    cout<<"\nԲ��������:"<<cy.area()<<endl;
    cout<<"\nԲ�������:"<<cy.volume()<<endl;
    return 0;
}
