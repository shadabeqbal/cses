/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "06-06-2020" 
Name: Ferris Wheel
Link: https://cses.fi/problemset/task/1090
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
#define sort(x) sort(x.begin(),x.end())

using namespace std;

int main()
{
    ll n, x,t,cnt=0,temp=0;
    cin >> n >> x;
    multiset<ll> st;
    for (ll i = 0; i < n; i++){
        cin >> t;
        st.insert(t);
    }

    while(!st.empty()){
        if(temp==0)
        {
            cnt++;
            temp=x-*st.begin();
            st.erase(st.begin());
        }else{
            auto it= st.lower_bound(temp);
            if(it == st.begin() && *it > temp){
                temp=x-*it;
                cnt++;
                st.erase(it);
                continue;
            }
            if(it == st.end() || *it > temp){
                it--;
            }
            st.erase(it);
            temp=0;
                
        }

    }

    cout<<cnt;
    return 0;
}