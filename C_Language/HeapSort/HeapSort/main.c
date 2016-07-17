//
//  main.c
//  HeapSort
//
//  Created by SonChangWoo on 2016. 7. 17..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "SimpleHeap.h"

int PriComp(int n1, int n2) {
    return n2-n1;
}

void HeapSort(int arr[], int n, PriorityComp pc) {
    Heap heap;
    int i;
    
    HeapInit(&heap, pc);
    
    for (i=0;i<n;i++) {
        HInsert(&heap, arr[i]);
    }
    
    for (i=0;i<n;i++) {
        arr[i] = HDelete(&heap);
    }
}

int main() {
    int arr[4] = {3, 4, 2, 1};
    int i;
    
    HeapSort(arr, sizeof(arr)/sizeof(int), PriComp);
    
    for(i=0;i<4;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
