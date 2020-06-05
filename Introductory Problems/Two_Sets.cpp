/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Two Sets
Link: https://cses.fi/problemset/task/1092
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

void print(vi &vec)
{
    for (int i : vec)
        cout << i << " ";
    cout << "\n";
}
int main()
{
    vi set1;
    vi set2;
    ll sum1 = 0, sum2 = 0;
    ll n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (sum1 == sum2)
        {
            set1.PB(i);
            sum1 += i;
        }
        else if (sum1 > sum2)
        {
            set2.PB(i);
            sum2 += i;
        }
        else
        {
            set1.PB(i);
            sum1 += i;
        }
    }
   
    if (sum1 == sum2)
    {
        cout << "YES"
             << "\n";
        cout << set1.size() << "\n";
        print(set1);
        cout << set2.size() << "\n";
        print(set2);
    }
    else
    {
        cout << "NO";
    }
}