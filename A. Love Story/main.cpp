#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define Created ios_base::sync_with_stdio(0);
#define By cin.tie(0);
#define Mahmoud_Abou_Hawis cout.tie(0);
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
const long long int MOD=1e9+7, OO=0x3f3f3f3f;
const long long int  LOO=0x3f3f3f3f3f3f3f3f;
const long double EPS=1e-8;
const ll N = 1e5 +10;
vector<pair<pair<ll,ll>,ll>>graph[N];
ll n ,m ,MaxC;
ll Costs[N];

int main(){
    Created By Mahmoud_Abou_Hawis
    int t;
    cin>>t;
    string target = "codeforces";
    while (t--)
    {
      string a;
      cin>>a;
      int cnt = 0;
      for(int i = 0 ; i < 10 ; i++)
      {
         if(target[i] != a[i])cnt++;
      }
      cout<<cnt<<'\n';
    }
    return 0;
}