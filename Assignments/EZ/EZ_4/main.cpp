/*
Andrew Harrison
P11854 - Egypt
Programming Techniques
9/28/2022
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
#define PI 3.14159265358979323   ong
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
int main() 
{
  int sideA;
  int sideB;
  int sideC;
  
  while (true) 
  {
    scanf("%d%d%d", &sideA, &sideB, &sideC);
    if (sideA == 0 && sideB == 0 && sideC == 0)
    {
      return 0;
    }
    else if (pow(sideA, 2) == (pow(sideB, 2) + pow(sideC, 2)))
    {
      printf("right\n");
    }
    else if (pow(sideB, 2) == (pow(sideA, 2) + pow(sideC, 2)))
    {
      printf("right\n");
    }
    else if (pow(sideC, 2) == (pow(sideA, 2) + pow(sideB, 2)))
    {
      printf("right\n");
    }
    else
    {
      printf("wrong\n");
    }
  }
  return 0;
}
