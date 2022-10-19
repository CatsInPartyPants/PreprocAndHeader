#include <iostream>
#include "function.h"

#define DOUBLE

int main()
{
    //task2
    
    std::cout << D_MIN(5,10) << std::endl;
    std::cout << D_MAX(5, 10) << std::endl;
    std::cout << D_SQR(3) << std::endl;
    std::cout << D_POW(3,2) << std::endl;
    std::cout << D_EVEN(11);
    std::cout << D_ODD(11);
    std::cout << std::endl;

    //task 1
    double arr[10];
    FILL(arr, 10);
    SHOW(arr, 10);
    int min = FIND_MIN(arr, 10);
    int max = FIND_MAX(arr, 10);
    std::cout << "Min is " << min << " max is " << max << std::endl;

    SORT_ARRAY(arr, 10);
    SHOW(arr, 10);
}
