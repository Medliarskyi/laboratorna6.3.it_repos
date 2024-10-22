#include <iostream>
#include <iomanip> // Для форматованого виведення

using namespace std;

// Функція для виведення масиву
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << arr[i]; // формат виведення з відступом 5 символів
    }
    cout << endl;
}

// Функція для обчислення суми додатних елементів (ітераційно)
int sumPositiveElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Створимо масив
    int arr[] = { 3, -1, 5, -10, 7, 0, -2, 8 };
    int size = sizeof(arr) / sizeof(arr[0]); // обчислюємо розмір масиву

    // Виводимо масив
    cout << "Array: ";
    printArray(arr, size);

    // Обчислюємо суму додатних елементів
    int sum = sumPositiveElements(arr, size);

    // Виводимо результат
    cout << "The sum of positive elements: " << sum << endl;

    return 0;
}