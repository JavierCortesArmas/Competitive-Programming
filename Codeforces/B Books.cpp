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
lli n, s(0), r(0), c = -1;
int main () {_
    lli time;
    cin >> n >> time;
    lli t[n];
    fore (i, 0, n) {
        cin >> t[i];
    }
    fore (i, 0, n) {
        if (s+t[i] <= time) {
            s+=t[i];
        }
        else {
            s+=t[i];
            while (s > time) {
                c++;
                s-=t[c];
            }
        }
        r = max(r, i - c);
    }
    cout << r << ENDL;
}
