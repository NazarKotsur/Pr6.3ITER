#include <iostream>
#include <iomanip>

// ������� ��� �������� �������� ������ ����� �����
void fillArray(int arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << "Enter element " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
    }
}

// ������� ��� ��������� �������� ������ ����� �����
void printArray(const int arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << std::setw(4) << arr[index] << " ";
    }
    std::cout << std::endl;
}

// �������� ������� ��� �������� �������� ������ ����-����� ����
template <typename T>
void fillArray(T arr[], int size) {
    for (int index = 0; index < size; ++index) {
        std::cout << "Enter element <T> " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
    }
}

// �������� ������� ��� ��������� �������� ������ ����-����� ����
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

    // ��������� ������ ����� �����
    int* arr = new int[size];

    // �������� �� ��������� ������ ����� �����
    fillArray(arr, size);
    std::cout << "Array of integers: ";
    printArray(arr, size);

    // ��������� ������ ������ �����
    double* arrDouble = new double[size];

    // �������� �� ��������� ������ ������ �����
    fillArray(arrDouble, size);
    std::cout << "Array of doubles: ";
    printArray(arrDouble, size);

    delete[] arr;
    delete[] arrDouble;

    return 0;
}
