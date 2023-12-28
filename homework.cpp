#include <iostream>
#include <string>

using namespace std;

void changeNumbers(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
};

void addOne(int* a) {
    *a += 1;
};

void isOdd(int* a) {
    if (*a % 2 == 0) {
        cout << "Parne" << endl;
    }
    else {
        cout << "Ne parne" << endl;
    }
}

void square(int* a) {
    *a *= *a;
}

void product(int* a, int* b) {
    cout << *a * *b << endl;
}

void findBiggestDivisor(int* a) {
    int i = *a - 1;

    while (true) {
        if (*a % i != 0) {
            i--;
        }
        else {
            cout << "Biggest divisor: " << i << endl;
            break;
        }
    }
}

string isFibonaci(int* a) {
    int prev = 0;
    int nowa = 1;
    int sum = 0;

    while (sum <= *a && prev <= *a && nowa <= *a) {
        sum = prev + nowa;
        prev = sum + nowa;
        nowa = sum + prev;
        if (sum == *a || prev == *a || nowa == *a) {
            return "This is Fibonaci number";
        }
    }

    return "This isn't Fibonaci number";
}

void reverseNumber(int* a) {
    string reversedNumber = "";
    string stringifiedNumber = to_string(*a);

    for (int i = stringifiedNumber.length() - 1; i >= 0; i--) {
        reversedNumber += stringifiedNumber[i];
    }

    *a = stoi(reversedNumber);
}

int main()
{
    int a = 56;
    int b = 24;

    /*changeNumbers(&a, &b);*/
    /*addOne(&a);*/
    /*isOdd(&a);*/
    /*square(&a);*/
    /*product(&a ,&b);*/
    /*findBiggestDivisor(&b);*/
    /*cout << isFibonaci(&a) << endl;*/
    /*cout << a << endl << b;*/
    reverseNumber(&a);

    cout << a << endl;

    return 0;
}
