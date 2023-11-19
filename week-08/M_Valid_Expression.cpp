#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum =1;
        int count = 0;
        string s = "";
        while(count<n){
            count++;
            if(sum < x){
                sum +=1;
                s+='+';
            }
            else if(sum>x){
                sum-=1;
                s+='-';
            }
            else{
                sum*=1;
                s+='*';
            }
        }
        if(sum==x){
            cout<<s<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}