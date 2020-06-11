/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "11-06-2020" 
Name: 
Link: 
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a=MAX,b=MIN,curr=0,max_people=0;
    cin>>n;
    vector<pair<int,bool>> vec;
    while(n--){
        cin>>a>>b;
        vec.pb(mp(a,true));
        vec.pb(mp(b,false));    
    }
    sort(vec);
    for(int i=0;i<int(vec.size());i++){
        curr += vec[i].second ? 1 : -1;
        max_people = max(max_people, curr);
    }

    cout<<max_people;
    return 0;
}