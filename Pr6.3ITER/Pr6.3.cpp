#include <iostream>
#include <iomanip>

// Функція для введення елементів масиву цілих чисел
void fillArray(int arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << "Enter element " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
    }
}

// Функція для виведення елементів масиву цілих чисел
void printArray(const int arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << std::setw(4) << arr[index] << " ";
    }
    std::cout << std::endl;
}

// Шаблонна функція для введення елементів масиву будь-якого типу
template <typename T>
void fillArray(T arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << "Enter element <T> " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
    }
}

// Шаблонна функція для виведення елементів масиву будь-якого типу
template <typename T>
void printArray(const T arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << std::setw(4) << arr[index] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    // Створення масиву цілих чисел
    int* arr = new int[size];

    // Введення та виведення масиву цілих чисел
    fillArray(arr, size);
    std::cout << "Array of integers: ";
    printArray(arr, size);

    // Створення масиву дійсних чисел
    double* arrDouble = new double[size];

    // Введення та виведення масиву дійсних чисел
    fillArray(arrDouble, size);
    std::cout << "Array of doubles: ";
    printArray(arrDouble, size);

    delete[] arr;
    delete[] arrDouble;

    return 0;
}
