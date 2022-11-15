## P12165 - Triangle Hazards
### Andrew Harrison

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

First we will start with triangle ABP. 

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Cut.png" width="300">

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq.png" width="300">

BF would be m6 and FA would be m5. So from this we will get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq2.png" width="300">

We will then have (m5/m6) = k1.

From this we get:

<img src="https://github.com/ACHarrison32/4883-PT-Harrison/blob/main/Assignments/Presentation/Triangle_ABP_Eq3.png" width="300">
