// pointer.cpp created on 15:19.
// Created by praguetramp on 2022/3/24.
//
#include <iostream>
#include <cmath>

using namespace std;

//函数返回类型为指针
char *noblank(char *str){
    while(*str == ' ')
        str++;
    return str;
}

int main() {
    char *s1 = "  using namespace std  ";
    char *s2 = noblank(s1);
    cout << s2 << endl;
    double (*pointerFun)(double); //定义指向函数的指针，存放的是函数的地址
    pointerFun =sqrt;             //指向函数名
    cout <<(*pointerFun)(4.0)<<endl;
    //指针输出二维数组
    int a[2][3]={{1,2,3},{4,5,6}},(*p)[3];
    for(p=a;p<a+2;p++){
        for(int *q =*p;q<*p+3;q++)
            cout<<*q<<"\t";
        cout<<endl;
    }

    return 0;
}
