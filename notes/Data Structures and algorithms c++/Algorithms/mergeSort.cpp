#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int start, int end) {
}

void mergeSort(vector<int> &arr, int start, int end) {
    if (start >= end) {
        return;
    } else {
        int mid = (end + start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid, end);
    }
}

int main() {
    vector<int> arr = {5, 3, 7, 5, 2, 1, 8};
    mergeSort(arr, 0, 7);
}