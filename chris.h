#ifndef chris_h
#define chris_h

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


void maxHeapify(int* arr, int index, int heapSize) {

    int l = 2 * index + 1;
    int r = 2 * index + 2;
    int largest = 0;


    if (l < heapSize && arr[l] > arr[index]) {
        largest = l;
    }
    else {
        largest = index;
    }
    if (r < heapSize && arr[r] > arr[largest]) {
        largest = r;
    }


    if (largest != index) {
        swap(arr[index], arr[largest]);
        maxHeapify(arr, largest, heapSize);
    }
}


void buildMaxHeap(int* arr, int n) {

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, i, n);
    }
}


void heapSort(int* arr, int n) {

    buildMaxHeap(arr, n);


    int heapSize = n;
    for (int i = n - 1; i > 0; i--) {

        swap(arr[0], arr[i]);
        

        heapSize--;
        maxHeapify(arr, 0, heapSize);

    }
    
}



void bubbleSort(int myarr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (myarr[j + 1] < myarr[j])
            {
                std::swap(myarr[j], myarr[j + 1]);
            }
        }
    }
    
}


void fillUpward(int myarr[], int n){
    for(int i = 0; i < n; i++){
        myarr[i] = i+1;
    }
}
void fillReverse(int myarr[], int n){
    for(int i = 0; i < n; i++){
        myarr[i] = n - i;
    }
}
void fillHalfReverse(int myarr[], int n){
    for(int i = 0; i < n; i++){
        if(i < n/2){
            myarr[i] = n/2 - i;    
        } else{
            myarr[i] = i+1;
        }
        
    }
}

#endif /* chris_h */