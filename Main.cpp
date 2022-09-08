/*
Andrew Harrison
Programming Techniques
8/25/2022
10226 Hardwood Species
*/

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

using namespace std;
#define endl "\n"

void openFiles(ifstream& read, ofstream& outfile);

int main()
{
    ifstream read;
    ofstream outfile;

    openFiles(read, outfile);

    map<string, int> treeCount;

    double num;
    double totalNum = 0;
    string tree;

    read >> num;
    getline(read, tree);
    read.ignore(256, '\n');
    while (num > 0)
    {
        while (getline(read, tree) && tree != "")
        {
            treeCount[tree]++;
            totalNum++;
        }
        for (auto it = treeCount.cbegin(); it != treeCount.cend(); it++)
        {
            outfile << it->first << " " << fixed << setprecision(4)
                << it->second / totalNum * 100 << endl;
        }
        treeCount.clear();
        num--;
        outfile << endl;
    }
    return (0);
}

void openFiles(ifstream& infile, ofstream& outfile) {
    char inFileName[40];
    char outFileName[40];
    cout << "Enter Input File Name: ";
    cin >> inFileName;
    infile.open(inFileName); // open input file
    cout << "Enter Output File Name: ";
    cin >> outFileName;
    outfile.open(outFileName); // open output file
}
