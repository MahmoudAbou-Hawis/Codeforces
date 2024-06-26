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


pair<int,int> validation(string &a,int size)
{
    pair<int,int> p;
    for(int i = 0 ; i < size ; i++)
    {
        if( a[i] == 'S')
        {
            p.second = i;
        }
        else if(a[i] == 'G')
        {
            p.first = i;
        }
    }
    return p;
}

int main()
{
    Created By Sofar
    int n,m;
    cin >> n >> m;
    set<int> st;
    string a;
    bool valid = true;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a;
        pair<int,int> p = validation(a,m);
        if(p.first < p.second)
        {
            st.insert(p.second - p.first);
        }
        else
        {
            cout << -1;
            return 0;
        }
    }
    cout << st.size() ;
    return 0;
}


