/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Apartments
Link: https://cses.fi/problemset/task/1084
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
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long int
#define pii pair<int, int>
#define pl pair<ll, ll>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pl>
#define PI 3.1415926535897932384626

using namespace std;

int main()
{
    ll n, m, k, t, x = 0, y = 0, cnt = 0;
    vi v1, v2;
    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> t;
        v1.PB(t);
    }
    for (ll j = 0; j < n; j++)
    {
        cin >> t;
        v2.PB(t);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while (y < m && x < n)
    {
        if (v2[y] > v1[x] + k)
        {
            x++;
        }
        else if (v2[y] < v1[x] - k)
        {
            y++;
        }
        else
        {
            y++;
            x++;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}