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
  int a;
  int b;
  int c;

  while (true) 
  {
    cin >> a >> b >> c;
    
    if (a == 0 && b == 0 && c == 0)
    {
      return 0;
    }
    else if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
      cout << "right" << endl;
    }
    else if (pow(b, 2) == (pow(a, 2) + pow(c, 2)))
    {
      cout << "right" << endl;
    }
    else if (pow(c, 2) == (pow(a, 2) + pow(b, 2)))
    {
      cout << "right" << endl;
    }
    else
    {
      cout << "wrong" << endl;
    }
  }
  return 0;
}
