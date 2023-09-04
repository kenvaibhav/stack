#include<iostream>
#include<climits> // it is used to for returning the use of INT_MIN 
using namespace std;
class StackUsingArray{
int *data;
int nextIndex;
int capacity;
public:
StackUsingArray(int totalsize){
    data = new int[totalsize];
    nextIndex = 0;
    capacity = totalsize;
}
int size(){
    return nextIndex;
}
bool isEmpty(){
    return nextIndex==0;
}
void push(int value){
    if(nextIndex == capacity){
        int *newData = new int[2*capacity];
        for(int i = 0; i<capacity; i++){
            newData[i] = data[i];
        }
        capacity = 2*capacity;
        delete [] data;
        data = newData;
        // cout<<"Stack is Full"<<endl;
        // return;
    }
    data[nextIndex] = value;
    nextIndex++;
}
int top(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        return INT_MIN; // INT_MIN can be used with climits
    }
    return data[nextIndex-1];
}
int pop(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        return INT_MIN ;  // we can use INT_MIN when we don't want to return anything
    }
    nextIndex--;
    return data[nextIndex];
}
};

int main(){
    StackUsingArray s(3);
    cout<<s.isEmpty()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

}