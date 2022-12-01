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
lli n, arr[100001], r = 0; 
double c1, c2, c3, c4; 
int main() {
        c1 = c2 = c3 = c4 = 0;
	cin >> n;
	fore (i, 0 , n) {
		cin >> arr[i];
		if (arr[i] == 1) c1++;
		if (arr[i] == 2) c2++;
		if (arr[i] == 3) c3++;
		if (arr[i] == 4) c4++;
	}
	if (c3 >= c1) {
		r = c4 + c3 + ceil(c2 / 2);
	}
	else {
		r = c4 + c3;
		c1 = c1 - c3;
		r = r + ceil((2 * c2 + c1) / 4);
	}
	cout << r;
	return 0;
}
