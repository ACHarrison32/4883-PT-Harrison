/*
Andrew Harrison
Programming Techniques
8/25/2022
10226 Hardwood Species
*/

/*=============================================================*/
/*                     USER-DEFINED FILES                      */
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
/*=============================================================*/
/*                        IDENTIFIERS                          */
#define FileIn(file) freopen(file ".inp", "r", stdin)
#define FileOut(file) freopen(file ".out", "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define bit(n) (1 << (n))
#define Last(i) (i & -i)
#define INF 500000000
#define EPS 1e-7
#define maxN 10000
/*=============================================================*/
/*                            SCOPE                            */
using namespace std;
/*=============================================================*/
/*                       MAIN FUNCTION                         */
int main() 
{

  map<string, int> treeCount;

  // Variable Declarations
  double testCases;
  double totalNum = 0;
  string tree;

  scanf("%lf", &testCases);
  cin.ignore();
  getline(cin, tree);
  while (testCases > 0) 
  {
    while (getline(cin, tree) && tree != "") 
    {
      treeCount[tree]++;
      totalNum++;
    }
    for (auto it = treeCount.cbegin(); it != treeCount.cend(); it++)
      {
        cout << it->first << " " << fixed << setprecision(4)
                << it->second / totalNum * 100 << '\n';
      }
    treeCount.clear();
    totalNum = 0;
    testCases--;
    if(testCases>=1.0)
    {
      cout << '\n';
    }
  }  
  return (0);
}
