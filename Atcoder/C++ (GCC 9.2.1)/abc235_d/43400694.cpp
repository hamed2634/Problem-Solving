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

using namespace std;

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

typedef priority_queue<int> pq;
typedef priority_queue<int, vector<int>, greater<int>> pqr;
typedef priority_queue<ll, vector<ll>, greater<ll>> pqrl;


#define MOD (ll)(1e9 + 7)

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

#define N 1000001
int dx_all[8] = { 1, 0, -1, 0, 1, 1, -1, -1 },
        dy_all[8] = { 0, 1, 0, -1, -1, 1, -1, 1 };
int dx[4] = { 1, 0, -1, 0 },
        dy[4] = { 0, 1, 0, -1 };


ll n, a;
string s;
ll mn = INT32_MAX;
bool vis[N];

void func(ll num, ll cnt){
    if(num > N) return;

    if(num == n){
        mn = min(cnt,mn);
        return;
    }

    if(vis[num]) return;
    vis[num] = 1;


    func(num * a, cnt + 1);
    if(num > 10  && num % 10){
        func(stoll(to_string(num % 10) + to_string(num / 10)), cnt + 1);
    }
}

int main() {
    fastIO();fileIO();
    cin >> a >> n;
    func(1,0);
    cout << ((mn == INT32_MAX)? -1 : mn);

}