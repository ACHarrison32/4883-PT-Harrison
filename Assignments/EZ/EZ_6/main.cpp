/*
Andrew Harrison
11777 - Automate The Grades
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
/*                       MAIN FUNCTION                         */
int main ()
{
  
  int testCases;
  int term1;
  int term2;
  int finalExam;
  int attendance;
  int classTesterm1;
  int classTesterm2;
  int classTest3;
  int testsTaken;
  int classTestAverage;
  int sumOfAllGrades;
  char finalGrade;

  scanf("%d", &testCases);
  for(int i = 1; i <= testCases; i++)
  {
    
scanf("%d%d%d%d%d%d%d",&term1,&term2,&finalExam,&attendance,&classTesterm1,&classTesterm2,&classTest3);

    if(classTesterm1 <= classTesterm2 && classTesterm1 <= classTest3)
    {
      classTestAverage = (classTesterm2 + classTest3) / 2;
    }
    else if(classTesterm2 <= classTesterm1 && classTesterm2 <= classTest3)
    {
      classTestAverage = (classTesterm1 + classTest3) / 2;
    }
    else if(classTest3 <= classTesterm1 && classTest3 <= classTesterm2)
    {
      classTestAverage = (classTesterm1 + classTesterm2) / 2;
    }

    sumOfAllGrades = term1 + term2 + finalExam + attendance +
    classTestAverage;

    if(sumOfAllGrades >= 90)
    {
      finalGrade = 'A';
    }
    else if(sumOfAllGrades >= 80)
    {
      finalGrade = 'B';
    }
    else if(sumOfAllGrades >= 70)
    {
      finalGrade = 'C';
    }
    else if(sumOfAllGrades >= 60)
    {
      finalGrade = 'D';
    }
    else
    {
      finalGrade = 'F';
    }
    printf("Case %d: %c\n", i, finalGrade);
    }
  return 0;
}
