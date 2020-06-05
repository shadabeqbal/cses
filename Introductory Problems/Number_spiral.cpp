/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Number Spiral
Link: https://cses.fi/problemset/task/1071
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
    ll t, x, y;
    cin>>t;
    for (ll i = 0; i < t; i++)
    {
        cin>>y>>x;
        if(x>y){
            if(x%2 != 0){
                cout<<x*x-y+1;
            }else{
                x--;
                cout<<x*x+y;
            }
        }else{
            if(y%2 == 0){
                cout<<y*y-x+1;
 
            }else{
                y--;
                cout<<y*y+x;
            }
        }
        cout<<"\n";
    }
    return 0;
}