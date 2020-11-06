#include <iostream>
#include <vector>

using namespace std;

void print_array(int array[], int size) {
    // can't use sizeof on passed in array bc it's a pointer. returns warning. make + pass in separate parameter instead.

    // returns error
    // cout << sizeof(array) << endl;
    cout << size << endl;
    cout << array[0] << endl;

    // not allowed either bc arrays pass in pointers not copies
    // for (int i: array) cout << i;
}

void print_vector(vector<int> data)
{
    // use vectors or templatized arrays to pass stuff between functions
    cout << data.size() << endl;
    data.push_back(2);
}

void print_vector2(vector<int> &data)
{
    // pass by reference to modify directly --> no copy. direct reference to memory address.
    cout << data.size() << endl;
    data.push_back(2);
}

int main() {
    int arr[] = {257, 20, 30, 40, 50};
    print_array(arr, 5);

    vector<int> data = {12, 52, 63, 63};
    print_vector(data);
    print_vector(data);
    print_vector(data);

    print_vector2(data);
    print_vector2(data);
    print_vector2(data);
}