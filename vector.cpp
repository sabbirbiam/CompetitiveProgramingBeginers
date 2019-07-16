#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n, f, l;
    cin>>n;

    vector<long int>vc;

    for(long int i = 0; i<n; i++){
        cin>>f;
        if(f==0){
            cin>>l;
            vc.push_back(l);
        }else if(f==2){
            if(vc.size()>0){
               vc.pop_back();
            }
        }
        else{
            if(vc.size()>0){
                cin>>l;
                cout<<vc[l]<<endl;
            }

        }
    }
    return 0;
}
