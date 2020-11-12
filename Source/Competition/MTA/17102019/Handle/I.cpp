#include<bits/stdc++.h>
using namespace std;

void solve(long long n, long long m, long long t) {
    long long ans = 0;
    while(true) {
        //cout << n + n + m - 2 + m - 2 << " ";
        //cout << n << " " << m << " " << t << endl;
        if((n + n + m - 2 + m-2) <= t) {
            t -= (n + n + m - 2 + m-2);
            ans++;
            n -= 2;
            m -= 2;
            if ( t <= 0 || n < 3 || m < 3) break;
        }
        else break;
    }

    cout << ans;// << " " << t << " " << (n+m-2)*2;
} 

int main()
{
    long long n,m,t;

    cin >> n >> m >> t;

    solve(n,m,t);

    return 0;

}