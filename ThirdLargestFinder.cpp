#include <iostream>
using namespace std;

// Function to find the third largest element in an array
void ThirdLargest(int arr[], int arr_size) {
    int first = arr[0];
    int second = 0;
    int third = 0;

    // Finding the first largest element
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] > first) {
            first = arr[i];
        }
    }

    // Finding the second largest element
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    // Finding the third largest element
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }
    cout << endl << "The third largest element is: " << third << endl;
} 

// Main function to define the array and call the function
int main() {
    int arr[100];
    int arr_size;

    cout << "Enter size of array: ";
    cin >> arr_size;

    if(arr_size < 3) {
        cout << "Invalid input";
    } else {
        cout << "Enter the list of numbers (use space between numbers): ";
        for(int i = 0; i < arr_size; i++) { 
            cin >> arr[i];
        }
        cout << "The list is:" "\n{";
        for(int i = 0; i < arr_size; i++) {
            cout << arr[i];
            if(i != arr_size - 1) {
                cout << ",";
            }
        }
        cout << "}";

        // Calls the function to find the third largest element
        ThirdLargest(arr, arr_size);
        return 0;
    }
}
