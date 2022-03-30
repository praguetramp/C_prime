#include <iostream>
#include <string>
using namespace std;
int main(){
    string text1 = "i'm so glad to contact with you !";
    string t2,t3;
    t2="i love you !";
    t3 =text1+t2;
    int index ;
    index = t3.find("you");
    t3.append("welcome!");

    t3.erase(index,sizeof("you")-1);
    cout <<"sizeof--you--的大小为: "<<sizeof("you")<<endl;
    t3.insert(index,"csy");
    cout<<t3<<endl;
    return 0;
}