/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: Permutations
Link: https://cses.fi/problemset/task/1070
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
    string odd="";
    cin>>n;
    if(n>1 && n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(i%2 == 0)
            cout<<i<<" ";
        else
            odd+=to_string(i)+" ";
    }
 
    cout<<odd;
    return 0;
}