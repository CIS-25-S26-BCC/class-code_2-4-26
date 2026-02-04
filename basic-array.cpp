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


   std::cout << "\n--- SCORES ---" << std::endl;
   std::cout << "Score 1: " << scores[0] << std::endl;
   std::cout << "Score 2: " << scores[1] << std::endl;
    std::cout << "Score 3: " << scores[2] << std::endl;
    std::cout << "Score 4: " << scores[3] << std::endl;
    std::cout << "Score 5: " << scores[4] << std::endl;

   return 0;
}
