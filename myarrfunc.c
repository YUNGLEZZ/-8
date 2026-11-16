#include <stdio.h>
#include "myarrfunc.h"

void size(int *pnt1) {
    int i;
    printf("введите размер массива: \n");
    if(scanf("%d", &i)==1) {
        *pnt1 = i;
    }
}
void add(int arr[], int n) {
    int i;
    for(int k = 0; k < n; k++) {
        printf("введите число: ");
        while(scanf("%d", &i)==1) {
            arr[k] = i;
        }
    }
}
void show(int arr[], int n) {
    for(int k = 0; k < n; k++) {
        printf("%d | %d | %p\n", k, arr[k], &arr[k]);
    }


}
int maxkm(int *arrptr, size_t n, int k, int m) {
    if((k < 0) || (m >= n) || (k > n) || (m < 0) || (k > m)) {
        return -1;
    }
    int max = *(arrptr + k);
    for(int i = k; i < m; i++) {
        if(*(arrptr + i) > max) {
            max = *(arrptr + i);
        }
    }
    return max;
}
double avg_arif(int *arrptr, size_t n, int k, int m) {
    if((k < 0) || (m >= n) || (m < 0) || (k >= m)) {
        return -1;
    }
    double avg = 0.0;
    for(int i = k; i < m; i++) {
        avg += *(arrptr + i);
    }
    return avg / (m - k);
}
int kolvo(int *arrptr, size_t n, int k) {
    int g = 0;
    for(int i = 0; i < n; i++) {
        if(*(arrptr + i) > k) {
            g++;
        }
    }
    return g;
}