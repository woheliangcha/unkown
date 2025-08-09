#include<iostream>
// #include<pthread.h>
using namespace std;
void changeValue(int *a, float *b) {
    int*c=NULL;
    *c = *a;
    *a = *b;
    *b = *c;
    
}
int main() {
    int a = 10;
    float b = 20.5;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    int *ptr = &a;
    float *fptr = &b;
    *ptr=12;
    *fptr=25.5;
    cout << "changed of a: " << a << endl;
    cout << "changed of b: " << b << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    for (size_t i = 0; i <5; i++)
    {
        cout << "Value at arr[" << i << "]: " << *(arrPtr + i) << endl;
    }
    changeValue(&a, &b);
    cout << "After changeValue function call:" << endl;
    return 0;
}