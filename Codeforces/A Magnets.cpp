#include <bits/stdc++.h>
#define f first
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

int main () {
	lli n, c = 0;
	cin >> n;
	lli a[n];
	fore (i, 0, n) {
		cin >> a[i];
	}
	fore (i, 0, n) {
		if (a[i] != a[i + 1]) {
			c++;
		}
	}	
	cout << c;
}
