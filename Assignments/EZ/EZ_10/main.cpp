/*
Andrew Harrison
11172 - Relational Operators
Programming Techniques
10/03/2022
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
/*                         MAIN FUNCTION                       */
int main()
{
  int testCases;
  int num1;
  int num2;

  scanf("%d", &testCases);
  for(int i = 0; i < testCases; i++)
    {
      scanf("%d %d", &num1, &num2);
      if(num1 == num2)
      {
        printf("%s\n", "=");
      }
      else if(num1 < num2)
      {
        printf("%s\n", "<");
      }
      else if(num1 > num2)
      {
        printf("%s\n", ">");
      }
    }
  return 0;
}
