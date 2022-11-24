/*
Andrew Harrison
10004 - Bicoloring
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
vector<int> G[200];
bool colorArr[200];
bool path[200];
/*=============================================================*/
/*                ISBIPARTITE FUNCTION PROTOTYPE               */
bool isBipartite(int testCases, int src);
/*=============================================================*/
/*                         MAIN FUNCTION                       */
int main() 
{
  int testCases;
  int edges;
  int u;
  int v;
  while (scanf("%d", &testCases) && testCases != 0) 
  {
    scanf("%d", &edges);
    for (int i = 0; i < testCases; i++) 
    {
      G[i].clear();
    }
    for (int i = 0; i < edges; i++) 
    {
      scanf("%d %d", &u, &v);
      G[u].pb(v);
      G[v].pb(u); 
    }
    isBipartite(testCases, 0);
  }
  return 0;
}
/*=============================================================*/
/*                     ISBIPARTITE FUNCTION                    */
bool isBipartite(int testCases, int src) 
{
  for (int i = 0; i < testCases; i++) 
  {
    colorArr[i] = false;
    path[i] = false;
  }
  bool bipartite = true;
  queue<int> q;
  q.push(src);
  while (!q.empty()) 
  {
    int u = q.front();
    q.pop();
    for (int i = 0; i < G[u].size(); i++) 
    {
      int v = G[u][i];
      if (path[v] == false)
      {
        colorArr[v] = 1 - colorArr[u];
        path[v] = true;
        q.push(v);
      } 
      else if (colorArr[u] == colorArr[v])
      {
        bipartite = false;
      }
    }
  }
  if (bipartite == false) 
  {
    cout << "NOT BICOLORABLE." << '\n';
  } 
  else 
  {
    cout << "BICOLORABLE." << '\n';
  }
  return false;
}
