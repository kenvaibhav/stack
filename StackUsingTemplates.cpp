#include<iostream>
#include<climits> // it is used to for returning the use of INT_MIN 
using namespace std;

// Creating a stack using template is an ideal way 
template<typename T> 
class StackUsingArray{
T *data;
int nextIndex;
int capacity;
public:
StackUsingArray(int totalsize){
    data = new T[totalsize];
    nextIndex = 0;
    capacity = totalsize;
}
int size(){
    return nextIndex;
}
bool isEmpty(){
    return nextIndex==0;
}
void push(T value){
    if(nextIndex == capacity){
        T *newData = new T[2*capacity];
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
T top(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        return 0; // INT_MIN can't be used here
    }
    return data[nextIndex-1];
}
T pop(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        return 0 ;  // we can use INT_MIN when we don't want to return anything
    }
    nextIndex--;
    return data[nextIndex];
}
};

int main(){
    StackUsingArray <char> s(3);
    cout<<s.isEmpty()<<endl;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<" "<<s.pop()<<" "<<s.pop()<<" "<<s.pop();

}