#include <iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&heap,int n,int i){
int smallest=i;
int left=2*i+1;
int right=2*i+2;

if(left< n&&heap[left]<heap[smallest]){
smallest=left;
};
if(right<n&&heap[right]<heap[smallest]){
smallest=right;
};
if(smallest != i){
 swap(heap[i],heap[smallest]);
 heapify(heap,n,smallest);
};
}

void buildMinheap(vector<int>&heap){
    int n=heap.size();
    for(int  i= n/2-1;i>=0;i--){
      heapify(heap,n,i);
}
}

void printHeap(vector<int>&heap) {
    for (int x : heap) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int>heap={12,3,44,12,7,2,10,5};
     cout << "Original: ";
    printHeap(heap);

    buildMinheap(heap);

    cout << "Min Heap: ";
    printHeap(heap);
    return 0;
} 