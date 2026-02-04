#include <iostream>

int myFunction(int myNumber) {
    myNumber = myNumber + 1;
    return myNumber;
}

int myArrayFunction(int myArray[]) {
    myArray[0] = myArray[0] + 1;
    return myArray[0];
}

int main() {

    int myInt = 10;

    std::cout << myFunction(myInt) << std::endl;

    std::cout << myInt << std::endl;

    int myIntArray[3] = {10, 12, 14};

    std::cout << myArrayFunction(myIntArray) << std::endl;

    std::cout << myIntArray[0] << std::endl;

   return 0;
}
