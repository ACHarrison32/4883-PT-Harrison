/*
Andrew Harrison
12250 - Language Detection
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
  string word;
  int count = 1;

  cin >> word;
  while(word != "#")
    {
      if(word == "HELLO")
      {
        cout << "Case " << count << ": " << "ENGLISH" << '\n';
      }
      else if(word == "HOLA")
      {
        cout << "Case " << count << ": " << "SPANISH" << '\n';
      }
      else if(word == "HALLO")
      {
        cout << "Case " << count << ": " << "GERMAN" << '\n';
      }
      else if(word == "BONJOUR")
      {
        cout << "Case " << count << ": " << "FRENCH" << '\n';
      }
      else if(word == "CIAO")
      {
        cout << "Case " << count << ": " << "ITALIAN" << '\n';
      }
      else if(word == "ZDRAVSTVUJTE")
      {
        cout << "Case " << count << ": " << "RUSSIAN" << '\n';
      }
      else
      {
        cout << "Case " << count << ": " << "UNKNOWN" << '\n';
      }
      count++;
      cin >> word;
    }
  return 0;
}
