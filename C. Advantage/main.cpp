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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        int Max1 = 0;
        int Max2 = 0;
        for(auto &i:v)
        {
            cin>>i;
            if(i >= Max1)
            {
                Max2 = Max1;
                Max1 = i;
            }
            else if(i > Max2)
            {
                Max2 = i;
            }

        }
        for(auto &i : v)
        {
            if(i != Max1)
            {
                cout<< i - Max1 << ' ';
            }
            else
            {
                cout << i - Max2 << ' ';
            }
        }
        cout<<'\n';
    }

    return 0;
}

