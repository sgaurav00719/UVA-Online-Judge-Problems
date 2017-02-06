/*
 * UVa11565.cpp
 *
 *  Created on: Jan 15, 2017
 *      Author: iNviNciBLe
 *
 *
 *      Let us look at a boring mathematics problem. :-)
We have three different integers, x, y and z, which satisfy the following three relations:
• x + y + z = A
• xyz = B
• x
2 + y
2 + z
2 = C
You are asked to write a program that solves for x, y and z for given values of A, B and C.
Input
The first line of the input file gives the number of test cases N (N < 20). Each of the following N lines
gives the values of A, B and C (1 ≤ A, B, C ≤ 10000).
Output
For each test case, output the corresponding values of x, y and z. If there are many possible answers,
choose the one with the least value of x. If there is a tie, output the one with the least value of y.
If there is no solution, output the line ‘No solution.’ instead.
Sample Input
2
1 2 3
6 6 14

Sample Output
No solution.
1 2 3
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int tc, a, b, c;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d %d", &a, &b, &c);

		bool sol = false;
		int x, y, z;

		for (x = -100; x <= 100; x++)
				for (y = -100; y <= 100; y++)
						for (z = -100; z <= 100; z++)
							if (y != x && z != x && z != y && x + y + z == a
									&& x * y * z == b
									&& x * x + y * y + z * z == c) {
								if(!sol)printf("%d %d %d\n", x, y, z);
								sol = true;
							}
		if (!sol)
			printf("No solution.\n");
	}

	return 0;
}


