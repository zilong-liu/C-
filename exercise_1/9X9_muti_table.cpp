#include <iostream>
using namespace std;

int table()
{   int i,j;
    for (i=1;i<10;++i)
    {
        for (j=1;j<=i;++j)
        {
         cout<<j<<'x'<<i<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
