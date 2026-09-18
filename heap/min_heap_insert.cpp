#include <iostream>
using namespace std;

class min_heap{
    int arr[100];
    int size=0;

    public:

    void insert(int value){
    arr[size]=value;
    int i = size;
    size++;
    
    while(i>0){
        int parent= (i-1)/2;
     if(arr[i]<arr[parent]){
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

     min_heap h;

     h.insert(20);
     h.insert(3);
     h.insert(15);
     h.insert(18);
     h.insert(25);
     h.insert(6);

     h.display();

    return 0;
}