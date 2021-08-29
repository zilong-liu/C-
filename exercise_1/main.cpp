#include <iostream>
using namespace std;
void print_table();//打印乘法表函数
void print_star(int);//打印星星函数
int main()
{
    cout<<"九九乘法表"<<endl;
    print_table();
    cout<<"星星矩阵："<<endl;
    print_star(5);
    return 0;
}

void print_star(int num_line)
{
    int i,j,k;
    for (i= num_line;i>0;--i)
    {
        for (j=i-1;j>0;--j)//打印空格
        {
            cout<<' ';
        }
        for (k = (num_line+1-i)*2-1;k>0;--k)//打印星星
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
void print_table()
{
    int i,j;
    for (i=1;i<10;++i)
    {
        for (j=1;j<=i;++j)
        {
         cout<<j<<'x'<<i<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }
}
