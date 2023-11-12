#include <iostream>
#include <vector>

#include "Number.h"
#include "Integer.h"
#include "Real.h"

using namespace std;




int main()
{

    vector<Number*> numbers;
    numbers.push_back(new Integer(2, 4));
    numbers.push_back(new Real(2.4, 6.8));

    for (auto number : numbers) {
        number->showSum();
        number->showSubstraction();
        number->showProduct();
        number->showFraction();
    }

    return 0;

}