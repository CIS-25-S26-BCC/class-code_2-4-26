#include <iostream>

int main() {
    const int SIZE = 5;
    int scores[SIZE];

//    std::cout << "Enter score 1: ";
//    std::cin >> scores[0];

//    std::cout << "Enter score 2: ";
//    std::cin >> scores[1];

//    std::cout << "Enter score 3: ";
//    std::cin >> scores[2];

    std::cout << "Enter " << SIZE << " numbers:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> scores[i]; // The loop counter `i` is used as the index!
    }


    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = sum + scores[i]; // Add each element to the sum
    }

    double average = sum / SIZE;
    std::cout << "The average is: " << average << std::endl;


   return 0;
}
