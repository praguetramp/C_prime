#include <iostream>
#include <cmath>
using namespace std;
int cnt=0;
void move(char x, char y){
    cout<<x<<"-->"<<y<<endl;
    cnt++;
}
void hanoi(int n,char a ,char b, char c){
    if (n==1)
        move(a,c);
    else{
        hanoi(n-1,a,c,b); //借助C将A中n-1个移动到B
        move(a,c); //移动最下面的一个
        hanoi(n-1,b,a,c); //借助A将B中的n-1个移动到C
    }
}
int main(){
    int m;
    cout <<"请输入hanoi的层数:"<<endl;
    cin>>m;
    cout <<"移动"<<m<<"层hanoi的过程:"<<endl;
    hanoi(m,'A','B','C');
    cout<<"总共移动次数为:"<<cnt<<"次"<<endl;
    return 0;
}