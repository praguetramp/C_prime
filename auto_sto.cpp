// auto_sto.cpp created on 16:28.
// Created by praguetramp on 2022/3/24.
//

#include <iostream>
#include <cmath>
using  namespace std;
int main(){
    //new¶¯Ì¬ÉêÇëÄÚ´æ
    double *p;
    p = new double;
    *p = 100.0;
    //double *p = new double (100.0);
    cout <<*p<<p<<endl;
    delete p;

}
