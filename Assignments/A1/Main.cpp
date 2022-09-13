/*
Andrew Harrison
Programming Techniques
8/25/2022
10226 Hardwood Species
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
#define newline "\n"
/*=============================================================*/
/*                            SCOPE                            */
using namespace std;
/*=============================================================*/
/*                     FUNCTION PROTOTYPES                     */
void openFiles(ifstream &read, ofstream &display);
/*=============================================================*/
/*                       MAIN FUNCTION                         */
int main() 
{
  ifstream read;
  ofstream display;

  openFiles(read, display);

  //Variable Declarations
  int num1;
  int num2;

  while (read >> num1 >> num2)
  {
    display << abs(num1 - num2);
    display << newline;
  }
}
/*=============================================================*/
/*                  OPEN FILES FUNCTION                        */
void openFiles(ifstream& infile, ofstream& display)
{
    char inFileName[40];
    char outFileName[40];
    cout << "Enter Input File Name: ";
    cin >> inFileName;
    infile.open(inFileName); //open input file
    cout << "Enter Output File Name: ";
    cin >> outFileName;
    display.open(outFileName);//open output file
}
