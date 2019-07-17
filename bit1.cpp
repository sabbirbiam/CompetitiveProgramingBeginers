#include<bits/stdc++.h>

using namespace std;

int checkBit(int n, int pos)
{
    int a = 1<<pos;
    cout<<"a="<<a<<endl;
    return n&a;
}

void printBinary(int n)
{
    cout<<checkBit(n, 5);
    for(int i = 4;i>=0; --i)
    {

        //if(checkBit(n, i) == 0) printf("0");
        //else printf("1");
    }
}

int main()
{
    int a = 40;
    printBinary(a);
    return 0;
}
