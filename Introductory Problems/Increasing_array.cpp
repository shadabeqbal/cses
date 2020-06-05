/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Increasing Array
Link: https://cses.fi/problemset/task/1094
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
    int n;
    cin >> n;
    vi vec(n);
    long long int count = 0;
    long long int prevmax =0,var=0;
    for (int i = 0; i < n; i++)
        cin >> vec[i];
 
    for (int i = 1; i < n; i++)
    {
        if (vec[i] < vec[i-1] || vec[i]<prevmax){
            var = vec[i-1];
            if(var > prevmax)
                prevmax = var;
            
            count += prevmax - vec[i];
        }
    }
    cout << count;
}