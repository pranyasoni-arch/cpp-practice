#include <iostream>
#include <utility> // for std::swap
using namespace std;

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void normalswap(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) { // loop until second last element
        swap(arr[i], arr[i + 1]); // uses std::swap
    }
}

int main() {
    int even[8] = {5, 3, 7, 6, 2, 9, 7, 1};
    int odd[7]  = {4, 7, 6, 1, 9, 3, 8};

    normalswap(even, 8);
    printarr(even, 8);

    normalswap(odd, 7);
    printarr(odd, 7);

    return 0;
}
