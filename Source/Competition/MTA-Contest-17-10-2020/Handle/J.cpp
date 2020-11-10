#include<bits/stdc++.h>
using namespace std;

void solve(long long a , long long b) {
    long long ans = 0;
    if(a % 2 !=0 && b %2 == 0) {   
        for(long long i = a; i <= b ; i+=2) {
            ans += (i+1) - i;
        }
    }
    else if (a % 2 !=0 && b % 2 != 0) {
        for(long long i = a; i < b ; i+=2) {
            ans += (i+1) - i;
        }
        ans = ans - b;
    }
    else if (a % 2 == 0 && b % 2 != 0) {
        for(long long i = a+1; i < b ; i+=2) {
            ans += (i+1) - i;
        }
        ans = a - b + ans;
    }
    else {
        for(long long i = a+1; i < b ; i+=2) {
            ans += (i+1) - i;
        }
        ans = ans + a;
    }

    cout << ans;
}

int main()
{
    long long a,b;
    cin >> a >> b;

    solve(a,b);

    return 0;
}