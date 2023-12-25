#include <iostream>

int *memory(int *ptrArr, int size){
    ptrArr = new int[size];
    return ptrArr;
}

void fill(int *ptrArr, int sizeOfArr){
    for (int i = 0; i < sizeOfArr; i++){
        std::cin >> ptrArr[i];
    }
}

void swap(int *ptrArr, int size){
    for(int i=0; i<size; i+=2){
        int tmp = ptrArr[i];
        ptrArr[i] = ptrArr[i+1];
        ptrArr[i+1] = tmp;
    }
}

void show(int *ptrArr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << ptrArr[i] << " ";
    }
}

void del(int *ptrArr){
    delete[] ptrArr;
    ptrArr = nullptr;
}

int main() {
    int *arr = 0, size = 12;
    arr = memory(arr, size);
    fill(arr,size);
    swap(arr,size);
    show(arr,size);
    del(arr);
    return 0;
}
