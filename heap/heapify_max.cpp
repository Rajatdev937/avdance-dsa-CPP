#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);
    }
}

void buildMaxHeap(vector<int>& heap) {
    int n = heap.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

void printHeap(vector<int>& heap) {
    for (int x : heap) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    vector<int> heap = {10, 5, 20, 2, 8, 15, 30};

    cout << "Original: ";
    printHeap(heap);

    buildMaxHeap(heap);

    cout << "Max Heap: ";
    printHeap(heap);

    return 0;
}