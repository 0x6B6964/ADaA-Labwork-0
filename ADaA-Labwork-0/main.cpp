#include "Labwork0.h"
#include "../ArrayUtil.h"

int main() {
	int N;
	int** array = Labwork0::Task(1, 756, N);
	
	ArrayUtil::ConsoleLog(array, N, 3);

	return 0;
}