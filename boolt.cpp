#include <iostream>
#include <conio.h>
#include <iomanip>

#define hjh 20
using namespace std;
const string csy ="hello";
int main(){
    cout <<"please input the b key to the bell \n";
    char ch =getchar();
    if(ch =='b'){
        cout <<'\a';
    }else{
        if(ch=='\n')
            cout <<"what a boring select on ......\n";
        else
            cout <<"bye\n";
    }
    cout <<hjh<<" 是我的年龄"<<endl;
    cout <<csy<<" to you !"<<endl;
    return 0;
}