#include <bits/stdc++.h>
#define f firts
#define s second 
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
#define pot(a) ((a)*(a))
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
lli n, ip(0), pa(0); 
int main () { _
    cin >> n;
    vi a(n);
    fore (i, 0 , n) {
        cin >> a[i];
        if(a[i] % 2) {
            ip++;
        }
        else {
            pa++;
        }
    }
    if (ip > 0 && pa > 0) {
        sort(a.begin(), a.end());
        fore (i, 0, n) {
            cout << a[i] << " ";
        }
    }
    else {
        fore (i, 0, n) {
            cout << a[i] << " ";
        }
    }   
}
