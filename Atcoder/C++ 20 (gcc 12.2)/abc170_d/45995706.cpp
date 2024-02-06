/*
 "رَبَّنَا لاَ تُؤَاخِذْنَا إِن نَّسِينَا أَوْ أَخْطَأْنَا
رَبَّنَا وَلاَ تَحْمِلْ عَلَيْنَا إِصْرًا كَمَا حَمَلْتَهُ عَلَى الَّذِينَ مِن قَبْلِنَا
رَبَّنَا وَلاَ تُحَمِّلْنَا مَا لاَ طَاقَةَ لَنَا بِهِ وَاعْفُ عَنَّا وَاغْفِرْ لَنَا وَارْحَمْنَآ
أَنتَ مَوْلاَنَا فَانصُرْنَا عَلَى الْقَوْمِ الْكَافِرِينَ"
*/

#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <cmath>
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <chrono>

using namespace std;
using namespace __gnu_pbds;
using namespace std::chrono;

void fileIO(void) {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif


#ifdef ONLINE_JUDGE
    //freopen("", "r", stdin);
#endif

}

void fastIO(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;

typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;

typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;

typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<plll> vlll;

typedef vector<string> vs;
typedef vector<bool> vb;


#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)

#define MP make_pair
#define PB push_back
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
#define all_r(a)   a.rbegin(),a.rend()
#define clr(x, val)    memset((x), (val), sizeof(x))

#define tests int t; cin >> t; int test = 0; while(test++ < t)
#define setpre(n, x)  cout << fixed << setprecision(n) << x

#define endl '\n'
#define kill return 0
#define flsh cout.flush()

int dx_all[8] = { 1, 0, -1, 0, 1, 1, -1, -1 },
        dy_all[8] = { 0, 1, 0, -1, -1, 1, -1, 1 };
int dx[4] = { 1, 0, -1, 0 },
        dy[4] = { 0, 1, 0, -1 };

#define N (ll)1e6 + 1
#define MOD (ll)(1e9 + 7)


ll calc_ones(ll a, ll bit){
    ++bit;
    ll ones = a/(1ll << bit) * (1ll << (bit - 1));
    if(a % (1ll << bit) >= (1ll << (bit - 1))) ones += a % (1ll << bit) - (1ll << (bit - 1)) + 1;
    return ones;
}


int main() {
    fastIO();fileIO();
    ll n; cin >> n;
    vl monsters(n + 1), heros(n);
    loop(n + 1) cin >> monsters[i];
    loop(n) cin >> heros[i];
    ll ans = 0;
    loop(n){
        ll val = min(monsters[i],heros[i]);
        monsters[i] -= val;
        heros[i] -= val;
        ans += val;
        if(heros[i]){
            val = min(heros[i], monsters[i + 1]);
            monsters[i + 1] -= val;
            ans += val;
        }

    }
    cout << ans << endl;

}