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
lli n, m, r(0); 
int main () { _
    cin >> n >> m;   
    lli a[n];
    fore (i, 0, n) {
        cin >> a[i];
    }
    sort(a, a + n);
    lli l = lower_bound(a, a + n, m) - a;
    lli h = upper_bound(a, a + n, m) - a;
    lli med = (n - 1) / 2;
    if (med < l) {
        r += l * 2 - n + 1;
    }
    else if (med >= h) {
        r += n - h * 2;
    }
    cout << r << ENDL;
    return 0;  
}
