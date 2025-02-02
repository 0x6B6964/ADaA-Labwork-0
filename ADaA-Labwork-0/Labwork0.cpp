#include "Labwork0.h"
#
#include <math.h>

int** Labwork0::Task(int A, int B, int& outN)
{
	int** array = new int* [lround((B - A) / 35.0)];
	outN = 0;

	for (int i = A + 2; i <= B; i++) {
		if (i % 7)
			continue;

		if ((3 * i - 3) % 5)
			continue;

		array[outN] = new int[3];
		array[outN][0] = i - 2;
		array[outN][1] = i - 1;
		array[outN][2] = i;

		outN++;
	}

	return array;
}