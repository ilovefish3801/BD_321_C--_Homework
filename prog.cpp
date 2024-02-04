#include <iostream>
#include "function.h"

using namespace std;

// В мене трохи дивно вийшло, але суть передав. #define INTEGER, DOUBLE або CHAR треба писати у function.h, бо якщо тут, то не передається
int main() {

	srand(time(nullptr));

	const int size = 10;
	Type arr[size];
	::FILL_ARRAY(arr, size);
	::PRINT_ARRAY(arr, size);

	return 0;
}
