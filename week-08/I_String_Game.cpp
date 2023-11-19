#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int one_count = 0 ;
        int zero_count = 0 ;
        for( int i= 0 ; i<n ; i++){
            if(s[i] == '1'){
                one_count++;
            }
            else{
                zero_count++;
            }
        }
        int min_pairs = min(zero_count, one_count);
        if(min_pairs % 2 == 0){
            cout<<"Ramos"<<endl;
        }
        else{
            cout<<"Zlatan"<<endl;
        }
    }
    return 0;
}