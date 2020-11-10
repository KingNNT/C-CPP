#include<bits/stdc++.h>
using namespace std;

void solve(int n, int p[] , int a[], bool check) {
    // false -> xuong
    // true -> len
    int s[n+5];
    if(check == true) {
        swap(a[0],a[1]);
    }
    else {
        swap(a[n-2] , a[n-1]);
    }
    
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    int p[n+5] , a[n+5];
    bool check = true;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        a[i] = p[i];
    }
    if(p[0] > p[1]) check = false;
    else check = true;
    sort(a,a+n);
    solve(n,p,a, check);

    // if(check == true) cout << "len";
    // else cout << "xuong";

    return 0;
}