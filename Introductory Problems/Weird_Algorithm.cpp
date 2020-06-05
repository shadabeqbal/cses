/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Weird Algorithm
Link: https://cses.fi/problemset/task/1068
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

void f(long long n){
    cout<<n;
    if(n == 1)
        return;
    
    cout<<" ";
    
    if(n%2 == 0)
        f(n/2);
    else
        f(3*n+1);
}
int main()
{
    long long n;
    cin>>n;
    f(n);
    return 0;
}