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
        int One = -1;
        int Zero = -1;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>v[i];
            if(Zero == -1 &&v[i] == 0) Zero = i;
            if(v[i])One = i;
        }
        if(One == -1 || Zero == -1)
        {
            cout<< n-1 << '\n';
            continue;
        }
        int counter = 0;
        ll numberOfPairs  = 0;
        ll numberOfPairsO = 0;
        ll numberOfPairsZ = 0;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(v[i] == 0)
            {
                counter++;
                if(i == Zero)
                {
                    numberOfPairsO+=counter-1;
                }
            }
            else
            {
                numberOfPairs+=counter;
                numberOfPairsO+=counter;
                numberOfPairsZ+=counter;
                if(i < Zero)
                {
                    numberOfPairsO-=1;
                }
                if(i == One)
                {
                    numberOfPairsZ-=counter;
                }
                if(i < One)
                {
                    numberOfPairsZ++;
                }
            }
        }
           cout<<max({numberOfPairsZ,numberOfPairs,numberOfPairsO})<<'\n';
        }
    return 0;
}