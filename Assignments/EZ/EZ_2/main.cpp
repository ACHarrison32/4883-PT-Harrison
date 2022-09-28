/*
Andrew Harrison
P11875 - Brick Game
Programming Techniques
9/27/2022
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
#define newline "\n"
/*=============================================================*/
/*                            SCOPE                            */
using namespace std;
/*=============================================================*/
/*                       MAIN FUNCTION                         */
int main() {
  int testCases;
  int teamMembers;
  int ages;

  cin >> testCases;
  while (testCases <= 100) 
  {
    if (teamMembers <= 1 && teamMembers > 10) 
    {
      return 0;
    } 
    else 
    {
      for (int i = 1; i <= testCases; i++) 
      {
        cin >> teamMembers;
        for (int j = 0; j < teamMembers; j++) 
        {
          cin >> ages;
          if (ages < 11 && ages > 20) 
          {
            return 0;
          } 
          else 
          {
            if (j == teamMembers / 2)
            {
              cout << "Case " << i << ": " << ages << '\n';
            }
          }
        }
      }
    }
  }
  return 0;
}
