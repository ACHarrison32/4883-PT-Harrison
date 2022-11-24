/*
Andrew Harrison
Programming Techniques
P11396 - Claw Decomposition
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
/*                         DECLARATIONS                        */
vector<int> G[300];
int colorArr[300];
int path[300];
/*=============================================================*/
/*                ISBIPARTITE FUNCTION PROTOTYPE               */
bool isBipartite(int testCases, int src);
/*=============================================================*/
/*                         MAIN FUNCTION                       */
int main() {
  int testCases;
  int edges;
  int a;
  int b;
  while (scanf("%d", &testCases) && testCases != 0) 
  {
    edges = (testCases * 3) / 2;
    Fill(G, 0);
    while (edges != 0) 
    {
      scanf("%d%d", &a, &b);
      if (a == 0 && b == 0) 
      {
        break;
      }
      G[a].pb(b);
      G[b].pb(a);
    }
    isBipartite(testCases, 1);
  }
  return 0;
}
/*=============================================================*/
/*                     ISBIPARTITE FUNCTION                    */
bool isBipartite(int testCases, int src) 
{
  Fill(colorArr, -1);
  colorArr[src] = 1;
  bool bipartite = true;
  queue<int> q;
  q.push(src);
  for (int i = 0; i <= testCases; i++) 
  {
    path[i] = false;
  }
  while (!q.empty()) 
  {
    int a = q.front();
    q.pop();
    for (int i = 0; i < G[a].size(); i++)
      {
      int v = G[a][i];
      if (path[v] == 0 && colorArr[v] == -1) 
      {
        colorArr[v] = 1 - colorArr[a];
        path[v] = 1;
        q.push(v);
      }
    }
    for (int i = 0; i < G[a].size(); i++) 
    {
      int v = G[a][i];
      if (path[v] == 1 && colorArr[v] == colorArr[a]) 
      {
        bipartite = false;
      }
    }
  }
  if (bipartite == false)
  {
    cout << "NO" << '\n';
  } 
  else
  {
    cout << "YES" << '\n';
  }
  return true;
}
