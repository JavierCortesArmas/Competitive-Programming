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
string s, l = "hello"; lli c = 0, j;  
int main () { _
    cin >> s;
	for (lli i = 0; i < s.size(); i++) {
		if (s[i] == l[j]) {
			j++;
			c++;
		}
	}
	if (c == 5) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
