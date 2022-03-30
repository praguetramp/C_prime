//#include "stadafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int num = 1001;
    cout <<"decimal:"<<dec<<num<<endl;
    cout <<"Octal:"<<oct<<num<<endl;
    cout <<"Hexadecimal:"<<hex<<num<<endl;
    cout <<setfill('@')<<setw(2)<<20<<endl
    <<setw(3)<<20<<endl
    <<setw(3)<<1234<<endl;
    cout<<"输出关系运算的结果 (3!=2) :"
    <<(3!=2)<<endl;
    cout<<boolalpha
    <<"输出结果用true / false 表示："
    <<(3!=2)<<endl;
    return 0;
}