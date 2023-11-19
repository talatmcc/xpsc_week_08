#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int z = y-x;
        if(y<=x){
            cout<<y<<endl;
        }
        else{
            cout<< x + (z*2)<<endl;
        }
        
    }
    return 0;
}