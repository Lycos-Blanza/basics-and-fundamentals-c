#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int array1[10];
    int array2[10];
    int mergedArray[20];

    // Input
    // First Array
    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> num1;
    cout << "Enter First " << num1 << " Elements: ";
    for (int i = 0; i < num1; i++) {
        cin >> array1[i];
    }

    // Second Array
    cout << "Enter the number of elements for the second array (up to 10): ";
    cin >> num2;
    cout << "Enter Second " << num2 << " Elements: ";
    for (int i = 0; i < num2; i++) {
        cin >> array2[i];
    }

    // Output
    // Process of Merging the arrays
    for (int i = 0; i < num1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < num2; i++) {
        mergedArray[num1 + i] = array2[i];
    }

    int mergedSize = num1 + num2;
    cout << "\nMerged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
