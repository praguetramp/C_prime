// poiniter_struct.cpp created on 16:17.
// Created by praguetramp on 2022/3/24.
//
#include <iostream>
using namespace std;
struct Date{
    int year;
    int month;
    int day;
};
int main(){
    Date d ={2022,3,24},*p= &d;
    //结构体指针的两种
    cout<<(*p).year<<"-"<<(*p).month<<"-"<<(*p).day<<endl;
    cout<<p->year<<"/"<<p->month<<"/"<<p->day<<endl;
}