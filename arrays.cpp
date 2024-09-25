#include <iostream>
using namespace std;

int main(){
    int n;

    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Taking input for the array elements
    cout << "Enter the array elements: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Printing the array elements 

    cout << "array elements are: ";
    for(int i = 0; i < n; i++){
       cout<< arr[i] << " ";
    }

    return 0;
}