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
        hanoi(n-1,a,c,b); //����C��A��n-1���ƶ���B
        move(a,c); //�ƶ��������һ��
        hanoi(n-1,b,a,c); //����A��B�е�n-1���ƶ���C
    }
}
int main(){
    int m;
    cout <<"������hanoi�Ĳ���:"<<endl;
    cin>>m;
    cout <<"�ƶ�"<<m<<"��hanoi�Ĺ���:"<<endl;
    hanoi(m,'A','B','C');
    cout<<"�ܹ��ƶ�����Ϊ:"<<cnt<<"��"<<endl;
    return 0;
}