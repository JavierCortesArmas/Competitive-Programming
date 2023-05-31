#include <bits/stdc++.h>
#define f first
#define s second 
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size()), 
#define l '\n'
#define c cout    
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

void algorithm(string s) {
  lli count(0), left(0), right = s.length() - 1;
  sort(s.begin(), s.end());
  while(left < right) {
    if(s[left] == '0' && s[right] == '1') {
      count++;
    }
    left++;
    right--;
  }
  if(count % 2 == 1) {
    c << "DA" << l;
  }
  if(count == 0 || count % 2 == 0) {
    c << "NET" << l;
  }
}

int main() { _
  string str; lli t;
  cin >> t;
  while(t--) {
    cin >> str;
    algorithm(str);
  }
  return 0;
}
