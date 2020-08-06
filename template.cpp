#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <climits>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
 
#define MOD 1000000007
#define X first
#define Y second
#define pb push_back
#define debug(val, ch) cout <<val <<ch
#define FOR(i, st, en, ch) for(register int i = (st); i < (en) ; i += (ch))
#define RFOR(i, st, en, ch) for(register int i = (st); i > (en) ; i -= (ch))
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, -1, 1)
#define FORE(it, cont) for(auto it : cont)
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<int, bool> pib;
typedef pair<bool, int> pbi;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
 
void split(const string &s, vs &tokens, char delimiter){
	string token;
	istringstream tokenStream(s);
 
	while (getline(tokenStream, token, delimiter))
	  tokens.pb(token);
}
 
ll modpow(ll base, int exp, int modulus){
	base %= modulus;
	ll result = 1;
	while (exp > 0) {
	if (exp & 1) result = (result * base) % modulus;
	base = (base * base) % modulus;
	exp >>= 1;
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	

	return 0;
}