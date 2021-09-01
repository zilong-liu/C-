#include <iostream>
/*
在创建结构体的过程中，有两种方式，第一种是直接创建结构体，
没有指针指向，这时候无需新建指针，且里面的元素调用使用点乘
如果使用指针，则必须新建指针指向，同时使用箭头调用元素。
*/
using namespace std;

struct cplex
{
    int real;
    int ima;
};
    void Plus(cplex *m1,cplex *m2)
    {
        cout<<'('<<m1->real<<'+'<<m1->ima<<'i'<<')'<<'+'<<
        '('<<m2->real<<'+'<<m2->ima<<'i'<<')'<<'='<<m1->real+m2->real<<'+'<<m1->ima+m2->ima<<'i';
    }
int main()
{
    cplex *x1,*x2;
    x1 = new cplex;
    x2 = new cplex;
    x1->real = 3;
    x1->ima = 4;
    x2->real = 5;
    x2->ima = -1;
    Plus(x1,x2);
}
