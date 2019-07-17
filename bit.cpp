#include<bits/stdc++.h>

using namespace std;

int power(int n, int a)
{
    int resutl = 1;
    while(n--)
    {
        resutl *= a;
    }
    return resutl;
}

int main()
{
    /**
    left shift means
    **/
    int a = 1;
    int b = 1<<a;
    cout<<b<<endl;

    cout<<"Using power function"<<endl;
    cout<<power(a,a)<<endl;
    return 0;
}
