#include <iostream>
using namespace std;

class max_heap{
    int arr[100];
    int size;

    public:
       max_heap(){
       size=0;
     }

     void insert(int value){
      arr[size]=value;
      int i=size;
      size++;

while(i>0){
    int parent=(i-1)/2;

    if(arr[i]>arr[parent]){
        swap(arr[i],arr[parent]);
        i=parent;
    }
    else{
        break;
    }
}
}
void display(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main() {
    
    max_heap h;

    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    h.display();

    return 0;
}