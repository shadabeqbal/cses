/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "07-06-2020" 
Name: Concert Tickets
Link: https://cses.fi/problemset/task/1091
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <string>
#include <math.h>
#include <iomanip>

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define sort(x) sort(x.begin(), x.end())
#define search(x, y) binary_search(x.begin(), x.end(), y)

using namespace std;

int main()
{
    ll n, m, t;
    cin >> n >> m;
    multiset<ll,greater<int>> t_price;

    for (ll i = 0; i < n; i++)
    {
        cin >> t;
        t_price.insert(t);
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> t;
        auto it = t_price.lower_bound(t);
        if (it == t_price.end())
        {
           cout<<-1<<"\n";
        }
        else
        {
            cout<<*it<<"\n";
            t_price.erase(it);
        }
    }

    return 0;
}
