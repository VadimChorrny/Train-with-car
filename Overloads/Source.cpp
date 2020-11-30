#include <iostream>
#include "Array.h"



int main()
{
    Array arr(5, 1); // array---->[1 1 1 1 1]
    arr[0] = 500;// array ----> [5 1 1 1 1]
    arr[10] = 12345;
    std::cout << "arr[8]:" << arr[8] << std::endl;



    Array arr2(7, -1);
    arr2[1] = 777;
    arr.print();
    arr2.print();



    Array arr3 = (arr + arr2);
    arr3.print();



    (++ ++arr3).print();
    std::cout << "---Postfix-----------\n";
    (arr3++).print();
    arr3.print();



    int val = 100;
    std::cout << ++val;
    // НЕ можна перевантажувати sizeof . :: ?: typeid
    //Array clone = arr;
    //clone.print();
    //
    //clone = arr2;
    //clone.print();
}