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
#include <list>
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
#define ii pair<int, int>
/*=============================================================*/
/*                            SCOPE                            */
using namespace std;

typedef pair<int, int> iPair;

// This class represents a directed graph using
// adjacency list representation
class Graph {
  int V; // No. of vertices

  // In a weighted graph, we need to store vertex
  // and weight pair for every edge
  list<pair<int, int>> *adj;

public:
  Graph(int V); // Constructor

  // function to add an edge to graph
  void addEdge(int x, int y, int w);
  // prints shortest path from s to t
  int shortestPath(int S, int T);
};

// Allocates memory for adjacency list
Graph::Graph(int V) {
  this->V = V;
  adj = new list<iPair>[V];
}

void Graph::addEdge(int u, int v, int w) {
  adj[u].push_back(make_pair(v, w));
  adj[v].push_back(make_pair(u, w));
}

int Graph::shortestPath(int S, int T) {
  // Create a priority queue to store vertices that
  // are being preprocessed. This is weird syntax in C++.
  // Refer below link for details of this syntax
  // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
  priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

  // Create a vector for distances and initialize all
  // distances as infinite (INF)
  vector<int> dist(V, INF);

  // Insert source itself in priority queue and initialize
  // its distance as 0.
  pq.push(make_pair(0, S));
  dist[S] = 0;

  /* Looping till priority queue becomes empty (or all
  distances are not finalized) */
  while (!pq.empty()) {
    // The first vertex in pair is the minimum distance
    // vertex, extract it from priority queue.
    // vertex label is stored in second of pair (it
    // has to be done this way to keep the vertices
    // sorted distance (distance must be first item
    // in pair)
    int u = pq.top().second;
    pq.pop();

    // 'i' is used to get all adjacent vertices of a
    // vertex
    list<pair<int, int>>::iterator i;
    for (i = adj[u].begin(); i != adj[u].end(); ++i) {
      // Get vertex label and weight of current
      // adjacent of u.
      int v = (*i).first;
      int weight = (*i).second;

      // If there is shorted path to v through u.
      if (dist[v] > dist[u] + weight) {
        // Updating distance of v
        dist[v] = dist[u] + weight;
        pq.push(make_pair(dist[v], v));
      }
    }
  }
  return dist[T];
}

int main() {

  int testCases;
  int n;        
  int m;     
  int S;      
  int T;    
  int w;         
  int x;         
  int y;       

  scanf("%d", &testCases);
  for(int i = 0; i < testCases; i++)
    {
      scanf("%d %d %d %d", &n, &m, &S, &T);
      Graph g(n);
      for(int j = 0; j < m; j++)
        {
          scanf("%d %d %d", &x, &y, &w);
          g.addEdge(x, y, w);
        }
      if(g.shortestPath(S, T) == INF)
      {
        printf("Case #%d: unreachable\n", i+1);
      }
      else
      {
      printf("Case #%d: %d\n", i+1, g.shortestPath(S, T));
        }
      }

  return 0;
}
