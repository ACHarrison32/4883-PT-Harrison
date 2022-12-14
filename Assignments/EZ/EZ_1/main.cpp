/*
Andrew Harrison
Programming Techniques
Ez Breezy - 10783 Odd Sum
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
/*=============================================================*/
/*                            SCOPE                            */
using namespace std;
/*=============================================================*/
/*                       MAIN FUNCTION                         */
int main() {
  int testCases;
  int rangeA;
  int rangeB;

  scanf("%d", &testCases);
  if(testCases > 100)
  {
    return 0;
  }
  else
  {
    for (int i = 0; i < testCases; i++) {
      int sumOdd = 0;

      scanf("%d %d", &rangeA, &rangeB);

      for (int j = rangeA; j <= rangeB; j++) {
        if (j % 2 != 0) {
          sumOdd += j;
        }
      }

      printf("Case %d: %d\n", i + 1, sumOdd);
    }
  }
}
