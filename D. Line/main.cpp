#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define Created ios_base::sync_with_stdio(0);
#define By cin.tie(0);
#define Sofar cout.tie(0);
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
int main()
{
    Created By Sofar
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        vector<pair<int,int>>v;
        long long int sum = 0;
        for(int i = 0 ; i < n ;i++)
        {
            if(st[i]=='L')
            {
                v.pb({i,i});
                sum+=i;
            }
            else 
            {
                v.pb({(n-1)-i,i});
                sum+=((n-1)-i);
            }
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i <n ; i++)
        {
                sum-=v[i].f;
                sum+=max((n-1)-v[i].s , v[i].s);
            cout<<sum<<" ";
        }
        cout<<'\n';
    }
    

    return 0;
}


