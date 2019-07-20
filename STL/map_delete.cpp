#include<bits/stdc++.h>

using namespace std;

int main()
{
    long  s, value;
    map<string, long >myMap;
    map<string,long >::iterator it;
    cin>>s;
    string key, key1, output;
    int input;
    for(long i =0; i<s; ++i)
    {
        cin>>input;
        if(input == 0)
        {
            cin>>key>>value;
            if(myMap.find(key) == myMap.end())
            {
                myMap.insert(pair<string,long>(key, value));
            }
            else
            {
                myMap[key] = value;
            }
        }
        if(input == 1)
        {
            cin>>output;
            if(myMap[output])
                cout<<myMap[output]<<endl;
            else
                cout<<"0"<<endl;
        }
        if(input == 2)
        {
            cin>>key1;
            it = myMap.find(key1);
            myMap.erase(it);
        }

    }
    return 0;
}
