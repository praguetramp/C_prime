// class_ob.cpp created on 17:29.
// Created by praguetramp on 2022/3/24.
//
#include <iostream>
#include <cstring>
using namespace std;
class info{
    //���ݳ�Աһ��Ϊ˽��
    int id;
    char name[20];
    int pro;
    int net;
    int db;
    int total;
    //������Աһ��Ϊ����
public:
    info(int id=000,char name[]="lihao",int pro1 =0,int net1=0,int db1=0,int total=0){
        this->id=id;
        strcpy(name,name1);
        pro =pro1;
        net=net1;
        db =db1;
        total =pro1+net1+db1;
    }
    void set_info(int id,char *name,int a,int b,int c);
    int get_pro();
    int get_net();
    int get_db();
    int get_total();
    void show();
};
void info::set_info(int id1,char *name1,int a,int b,int c){
    id=id1;
   strcpy(name,name1);
   pro =a;
   net=b;
   db =c;
   total =a+b+c;
}
void info::show(){
    cout<<id<<"\t";
    cout<<name<<"\t";
    cout<<pro<<"\t";
    cout<<net<<"\t";
    cout<<db<<"\t";
    cout<<total<<endl;
}
int info::get_db() {
    return db;
}
int info::get_net() {
    return net;
}
int info::get_pro() {
    return pro;
}
int info::get_total() {
    return total;
}

int main(){
    const int cnt =2;
    int i=0,j=0;
    int id;
    char name[20];
    int pro;
    int net;
    int db;
    info stu[cnt],tmp;
    cout<<"������ѧ���ɼ���Ϣ��"<<endl;
    cout<<"ѧ��  ����  �������  ���������  ���ݿ�"<<endl;
    for(i=0;i<cnt;i++){
        cin>>id>>name>>pro>>net>>db;
        stu[i].set_info(id,name,pro,net,db);
    }
    cout<<"ѧ�� ���� ������� ��������� ���ݿ� �ܷ֣�"<<endl;
    for(i=0;i<cnt;i++){
        stu[i].show();
    }
    return 0;
}