#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 25

int n, a[n]; //n - количество элементов

// qs (a, 0 , n-1);

void qs(int *s_arr, int first, int last){

if (first < last){

int left = first, right = last, middle = s_arr[(left + right) / 2];

do{

while (s_arr[left] < middle) left++;

while (s_arr[right] > middle) right--;

if (left <= right){

int tmp = s_arr[left];

s_arr[left] = s_arr[right];

s_arr[right] = tmp;
