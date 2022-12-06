# P12165 - Triangle Hazards
### Andrew Harrison

### PDF Problem

[Problem PDF](./12165.pdf) 

### Problem:
In the picture below you can see a triangle ABC. Point D, E and F divides the sides BC, CA and AB
into m1:m2, m3:m4 and m5:m6 ratios respectively. A, D; B, E and C, F are connected. AD and BE
intersects at P, BE and CF intersects at Q and CF and AD intersects at R.
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABC.png" width="500">

So now a new triangle PQR is formed. Given triangle ABC it is very easy to find triangle PQR,
but given triangle PQR it is not straight forward to find ABC. Your task is now to do that.

### Menelaus's Theorem
A proposition about triangles in plane geometry. Suppose we have a triangle ABC, and a transversal line that crosses BC, AC, and AB at points D, E, and F respectively, with D, E, and F distinct from A, B, and C. A weak version of the theorem states that

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Menelaus_Theorem.png" width="300">
where |AB| is taken to be the ordinary length of segment AB: a positive value.
Given any line that transverses the three sides of a triangle (one of them will have to be extended), six segments are cut off on the sides. The product of three non-adjacent segments is equal to the product of the other three.

When looking at the problem given we are able to break the triangle up into 3 seperate triangles.

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP.png" width="300"> <img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR.png" width="300">  <img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ.png" width="300"> 


## Triangle ABP

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Cut_.png" width="500">

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq.png" width="300">

BF would be m6 and FA would be m5. So from this we will get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq2.png" width="300">

We will then have (m5/m6) = k1.

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq3.png" width="300">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/THEOREM2.png" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq4.png" width="300">


## Triangle BCQ:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Cut.png" width="500">

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Eq.png" width="300">

CD would be m2 and DB would be m1. So from this we will get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Eq2.png" width="300">

We will then have (m1/m2) = k2.

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Eq3.png" width="300">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Eq4.png" width="300">


## Triangle ACR:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Cut.png" width="500">

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Eq.png" width="300">

AE would be m4 and EC would be m3. So from this we will get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Eq2.png" width="300">

We will then have (m3/m4) = k3.

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Eq3.png" width="300">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Eq4_.png" width="300">

## Final Equations

From the previous 3 triangles:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq5.png" width="300">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_BCQ_Eq5.png" width="300">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ACR_Eq5.png" width="300">

## Handwritten Solution
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan1.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan2.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan3.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan4.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan5.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan6.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan7.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan8.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan9.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan10.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan11.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan12.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan13.jpg" width="500">
<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Scan14.jpg" width="500">

## My Coding Solution
```cpp
#include <iostream>

using namespace std;

int main() {
  int testCases;
  double px, py, qx, qy, rx, ry;
  double m1, m2, m3, m4, m5, m6;

  scanf("%d, &testCases);
  for (int i = 0; i < testCases; i++) {
    scanf("%lf %lf %lf %lf %lf %lf", &px, &py, &qx, &qy, &rx, &ry);
    scanf("%lf %lf %lf %lf %lf %lf", &m1, &m2, &m3, &m4, &m5, &m6);

    double k1 = (m5 / m6);
    double k2 = (m1 / m2);
    double k3 = (m3 / m4);
    double x1 = (k1 * k2 * k3 + k1 * k2 + k1) / (1 - k1 * k2 * k3);
    double x2 = (k2 * k3 * k1 + k2 * k3 + k2) / (1 - k1 * k2 * k3);
    double x3 = (k3 * k1 * k2 + k3 * k1 + k3) / (1 - k1 * k2 * k3);

    double pointAx = (rx - px) * (x1) + rx;
    double pointAy = (ry - py) * (x1) + ry;
    double pointBx = (px - qx) * (x2) + px;
    double pointBy = (py - qy) * (x2) + py;
    double pointCx = (qx - rx) * (x3) + qx;
    double pointCy = (qy - ry) * (x3) + qy;

    printf("%.8f %.8f %.8f %.8f %.8f %.8f\n", pointAx, pointAy, pointBx,
           pointBy, pointCx, pointCy);
  }
  return 0;
}
```
Input File For Code: [Input File](./input.txt)  
Output File For Code (ran by my code): [Output File](./output.txt)

## Another Coding Solution
```cpp
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
  double x, y;
  Point() {}
  Point(double x, double y): x(x), y(y) {}
} P, Q, R, A, B, C;

typedef Point Vector;

Vector operator + (const Point& a, const Point& b) {
  return Point(a.x + b.x, a.y + b.y);
}

Vector operator - (const Point& a, const Point& b) {
  return Point(a.x - b.x, a.y - b.y);
}

Vector operator * (const Point& a, const double& k) {
  return Point(a.x * k, a.y * k);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    double m1, m2, m3, m4, m5, m6;
    scanf("%lf%lf%lf%lf%lf%lf", &P.x, &P.y, &Q.x, &Q.y, &R.x, &R.y);
    scanf("%lf%lf%lf%lf%lf%lf", &m1, &m2, &m3, &m4, &m5, &m6);
    double k1 = m5 / m6, k2 = m1 / m2, k3 = m3 / m4, k = k1 * k2 * k3;
    A = (R - P) * ((k + k1 * k2 + k1) / (1 - k)) + R;
    B = (P - Q) * ((k + k2 * k3 + k2) / (1 - k)) + P;
    C = (Q - R) * ((k + k3 * k1 + k3) / (1 - k)) + Q;
    printf("%.8f %.8f %.8f %.8f %.8f %.8f\n", A.x, A.y, B.x, B.y, C.x, C.y);
  }
  return 0;
}
```
This is not a coding solution from me. I found this solution online at : https://wcr1996.com/2016/08/17/uva-12165-triangle-hazard/
This was an example I found that used Menelaus's Theorem to solve this problem. 
