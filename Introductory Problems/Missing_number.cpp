/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
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
#include <cstring>
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
    ll n,num;
    cin>>n;
    ll a[n-1],b[n];
 
    memset(b,0,sizeof(ll)*n);
 
    for(ll i=0;i<n-1;i++){
        cin>>a[i];
        b[a[i]-1]=1;
    }
        
    for(ll i=0;i<n;i++)
        if(b[i] == 0)
            num=i+1;
    
    cout<<num;
    
    return 0;
    
}