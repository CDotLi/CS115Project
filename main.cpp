//
//  main.cpp


#include <iostream>
#include "amanjot.h"
#include "brenna.h"
#include "ceasar.h"
#include "chris.h"
#include "paramvir.h"
#include "ctime"
using namespace std;



int main(int argc, const char * argv[]) {
    const int mySmall = 1000;
    int small[mySmall];
    const int myMed = 2500;
    int med[myMed];
    const int myLar = 5000;
    int lar[myLar];

    // Small heapSort times below
    fillUpward(small, mySmall);
    float time = clock();
    heapSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(small, mySmall);
    time = clock();
    heapSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small reverse set of heapSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(small, mySmall);
    time = clock();
    heapSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small half sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;


    // Medium heapSort times below
    fillUpward(med, myMed);
    time = clock();
    heapSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for medium sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(med, myMed);
    time = clock();
    heapSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for medium reverse set of heapSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(med, myMed);
    time = clock();
    heapSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for medium half sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;


        // Large heapSort times below
    fillUpward(lar, myLar);
    time = clock();
    heapSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(lar, myLar);
    time = clock();
    heapSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large reverse set of heapSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(lar, myLar);
    time = clock();
    heapSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large half sorted set of heapSort = " << time / CLOCKS_PER_SEC << endl;

    //Small bubble Sort times below

    fillUpward(small, mySmall);
    time = clock();
    bubbleSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(small, mySmall);
    time = clock();
    bubbleSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small reverse set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(small, mySmall);
    time = clock();
    bubbleSort(small, mySmall);
    time = clock() - time;
    cout << "total time taken for small half sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;


    //Medium size bubbleSort below


    fillUpward(med, myMed);
    time = clock();
    bubbleSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for medium sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(med, myMed);
    time = clock();
    bubbleSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for medium reverse set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(med, myMed);
    time = clock();
    bubbleSort(med, myMed);
    time = clock() - time;
    cout << "total time taken for Medium half sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;


        //Large size bubbleSort below


    fillUpward(lar, myLar);
    time = clock();
    bubbleSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;


    fillReverse(lar, myLar);
    time = clock();
    bubbleSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large reverse set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;



    fillHalfReverse(lar, myLar);
    time = clock();
    bubbleSort(lar, myLar);
    time = clock() - time;
    cout << "total time taken for large half sorted set of bubbleSort = " << time / CLOCKS_PER_SEC << endl;

   
    return 0;
}
