#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct database_student
{
    string name;
    int age;
    string gender;
    int Chinese;
    int English;
    int Math;
    database_student *next;
};


int main()
{
    fstream file;
    file.open("test.txt",ios::app);
    database_student *head, *p, *rear;
    head = rear = new database_student;
    while (true)
    {
        string tmp;
        cout<<"Please input a name :(End with 0)"<<endl;
        cin>>tmp;
        if (tmp == "0") break;
        else
        {
        p = new database_student;
        p->name = tmp;
        cout<<"Please input the age of "<<tmp<<'\r'<<'\n';
        cin>>p->age;
        cout<<"Please input the gender of "<<tmp<<'\r'<<'\n';
        cin>>p->gender;
        cout<<"Please input the Chinese grade of "<<tmp<<endl;
        cin>>p->Chinese;
        cout<<"Please input the English grade of "<<tmp<<endl;
        cin>>p->English;
        cout<<"Please input the Math grade of "<<tmp<<endl;
        cin>>p->Math;
        rear->next = p;
        rear = p;
        }
    }
    rear->next = NULL;

    file <<"姓名：" <<'\t'<<"性别："<<'\t'<<"年龄："<<'\t'<<"英语："<<'\t'<<"数学："<<'\t'<<"语文："<< endl;
    p = head ->next;
    while(p!=NULL)
    {
        file<<p->name<<'\t'<<p->gender<<'\t'<<p->age<<'\t'<<p->English<<'\t'<<p->
        Math<<'\t'<<p->Chinese<<endl;
        p = p->next;
    }
    cout<<endl;
    file.close();
    return 0;
}
