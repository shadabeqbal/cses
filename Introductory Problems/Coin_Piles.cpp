/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Coin Piles
Link: https://cses.fi/problemset/task/1754
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
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define vll vector<ll>

using namespace std;

int main()
{
    ll t;
    ll x,y;
    cin>>t;
    while(t--){
        
        cin >> x>>y;
        if(2*x-y >=0 && (2*x-y)%3 ==0 && 2*y-x >=0 && (2*y-x)%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}