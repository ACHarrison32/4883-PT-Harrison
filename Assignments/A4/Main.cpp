/*
Andrew Harrison
Programming Techniques
9/15/2022
514 Rails
*/
/*=============================================================*/
/*                     USER-DEFINED FILES                      */
#include <algorithm>
#include <bits/stdc++.h>
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
/*                            STACK                            */
stack<int> station, train;
/*=============================================================*/
/*                         MAIN FUNCTION                       */
int main() 
{
  //Variable Declarations
  int dirA;
  int dirB;
  int coach;
  bool flag;
  bool isPossible;

  while (cin >> dirA && dirA != 0) 
  {
    flag = false;
    for (;;) 
    {
      coach = 0;
      isPossible = true;
      for (int i = 0; i < dirA; i++) 
      {
        cin >> dirB;
        if (dirB == 0) 
        {
          flag = true;
          break;
        }
        if (isPossible == true) 
        {
          if (coach < dirB) 
          {
            while (coach < dirB)
            {
              station.push(coach);
              coach++;
            }
          } 
          else if (dirB == coach)
          {
            coach++;
          }
          else 
          {
            while (!station.empty() && station.top() != dirB) 
            {
              train.push(station.top()), station.pop();
            }
            if (station.empty()) 
            {
              isPossible = false;
            } 
            else
            {
              station.pop();
            }
          }
        }
      }

      if (flag == true)
      { 
        break;
      } 
      if (isPossible == true)
      {
        cout << "Yes" << newline;
      } 
      else 
      {
        cout << "No" << newline;
      }
    }
    cout << newline;
  }
  return 0;
}
