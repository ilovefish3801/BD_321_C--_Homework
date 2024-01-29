#ifdef INTEGER
typedef int Type;
#define ShowType ShowInt
#elif defined DOUBLE
typedef double Type;
#define ShowType ShowDouble
#elif defined CHAR
typedef char Type;
#endif

int getRandomNumber(int min, int max);
char getRandomSymbol();
void fillArray(Type*& arr, const int size);
void printArray(Type*& arr, const int size);
