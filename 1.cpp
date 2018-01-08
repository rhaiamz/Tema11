#include <iostream>
#include <vector>

using namespace std;
//commit
template <typename T>
class Stack {
private:
    vector<T> s;
public:
    bool empty() {
        if(s.empty()) return true;
        else return false;
    }
    void push(const T& item) {
        s.push_back(item);
    }
    T top() {
        if(!s.empty())  return s.back();
        else    return 0;
    }

    void pop();
    /*void pop() {
        s.pop_back();
    }*/
};

template <typename T>
void Stack<T>::pop() {
    s.pop_back();
}



int main() {
    Stack<int> stiva1;
    Stack<float> stiva2;
    int v1[5] = {1, 2, 3, 4, 5};
    float v2[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    for(int i = 0; i < 5; i++) {
        stiva1.push(v1[i]);
        stiva2.push(v2[i]);
    }
    cout<<"int: "<<stiva1.empty()<<endl;
    cout<<"float: "<<stiva2.empty()<<endl;
    cout<<"top int: "<<stiva1.top()<<endl;
    cout<<"top float: "<<stiva2.top()<<endl;
    stiva1.pop();
    stiva2.pop();
    cout<<"top int after push: "<<stiva1.top()<<endl;
    cout<<"top float after push: "<<stiva2.top()<<endl;
}
