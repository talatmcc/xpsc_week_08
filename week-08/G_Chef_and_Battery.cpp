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
        int count = 0;
        while (n != 50)
        {
            while (n > 50)
            {
                count++;
                n -= 3;
            }
            while (n < 50)
            {
                count++;
                n += 2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}