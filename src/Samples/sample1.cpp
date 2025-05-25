#include <iostream>
#define SIZE 5

int findMaximum(int numbers[], int size) {
    int highest = numbers[0];

    for (int index = 1; index < size; index++) {
        if (numbers[index] > highest) {
            highest = numbers[index];
        }
    }

    return highest;
}

int main() {
    int data[SIZE] = {5, 2, 9, 1, 6};
    int result = findMaximum(data, SIZE);
    std::cout << "Maximum value is: " << result << std::endl;
    return 0;
}
