
#include <iostream>
using namespace std;

int summaxsub(int arr[], int size) {
    int maxsum = arr[0];
    for (int i = 0; i < size; i++) {
        int currsum = 0;
        for (int j = i; j < size; j++) {
            currsum = currsum + arr[j];
            if (currsum > maxsum) {
                maxsum = currsum;
            }
        }
    }
    return maxsum;
}

int main() {
    int arr[] = {8, 3, 8, -5, 4, 3, -4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< summaxsub(arr, size) << endl;

    return 0;
}
