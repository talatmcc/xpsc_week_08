#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // vector<int> alice(n);
        // vector<int> bob(n);
        int alice = INT_MAX; 
        alice =min(abs(v[1] - v[0]),alice);
        // bob[n-1] = abs (bob[n-1] - bob[n-2]);

        for( int i=1 ; i<n-1; i++){
            int leftidx = i-1;
            int rightidx = i+1;
            alice = min(abs(v[leftidx] - v[rightidx]) , alice);
        }
        alice = 
    }
    return 0;
}