/*
Andrew Harrison
11764 - Jumping Mario
Programming Techniques
9/30/2022
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
int main ()
{
  int testCases;
  int numWalls;
  int current;
  int next;

  scanf("%d", &testCases);
  for(int i = 1; i <= testCases; i++)
    {
      int countHighWall = 0;
      int countLowWall = 0;
      
      scanf("%d%d", &numWalls, &current);
      for(int j = 0; j < numWalls - 1; j++)
        {
          scanf("%d", &next);
          if(current < next)
          {
            countHighWall++;
          }
          else if(current > next)
          {
            countLowWall++;
          }
          current = next;
        }
      printf("Case %d: %d%s%d\n", i, countHighWall," ", countLowWall);
    }
  return 0;
}
