#include <iostream>
/*
�ڴ����ṹ��Ĺ����У������ַ�ʽ����һ����ֱ�Ӵ����ṹ�壬
û��ָ��ָ����ʱ�������½�ָ�룬�������Ԫ�ص���ʹ�õ��
���ʹ��ָ�룬������½�ָ��ָ��ͬʱʹ�ü�ͷ����Ԫ�ء�
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
