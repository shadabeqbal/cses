/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Repetitions
Link: https://cses.fi/problemset/task/1069
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
    map<char, int> mp;
    mp.insert(pair<char, int>('A', 0));
    mp.insert(pair<char, int>('C', 0));
    mp.insert(pair<char, int>('G', 0));
    mp.insert(pair<char, int>('T', 0));
 
    string str;
    cin >> str;
    int max = 0;
    for (int i = 0; i < int(str.length()); i++)
    {
        mp[str[i]]++;
 
        if (mp[str[i]] > max)
            max = mp[str[i]];
        if (str[i] != str[i + 1])
            mp[str[i]] = 0;
    }
 
    cout << max;
}