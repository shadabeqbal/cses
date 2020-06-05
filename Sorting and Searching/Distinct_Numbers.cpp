/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Distinct Numbers
Link: https://cses.fi/problemset/task/1621
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
    ll x,n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        if(mp.find(x) != mp.end())
            mp[x]++;
        else
            mp.insert(pair<int,int>(x,1));
    }
 
    cout<<mp.size();
 
}