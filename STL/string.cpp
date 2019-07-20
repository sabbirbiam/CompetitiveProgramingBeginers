#include<bits/stdc++.h>

using namespace std;


int main()
{
    string bigString;
    string subString;
    cin>>bigString>>subString;
    int lengthSub = subString.size();
    int lengthS = bigString.size();


    for(int i =0; i<lengthS; ++i) {
        string sub = bigString.substr(i, lengthSub);
        if(sub ==  subString) {
            cout<<i<<endl;
        }
    }
    return 0;
}
