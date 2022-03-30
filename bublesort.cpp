#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double  a[10];
    char str[10];
    int N;
    int i=0,j=0;
    cin>>N;
//    for(i=0;i<N;i++){
//        cin>>a[i];
//    }
//    for(i=0;i<N-1;i++){                     // 排序趟数
//        for(j=0;j<N-1-i;j++){               // 前面部分需要排序，后面为有序
//            if(a[j]>a[j+1])
//            {
//                int temp =a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//            }
//        }
//    }
//    for(i=0;i<N;i++)
//        cout<<a[i]<<" ";
//    return 0;
    cin.getline(str,N);
    for(i=0;i<N;i++)
        cout <<str[i]<<" ";
}