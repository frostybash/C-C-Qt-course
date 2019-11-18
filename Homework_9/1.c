#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100000

void bubbleSort(int *num, int size)
{
  
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) 
    {
      if (num[j - 1] > num[j]) 
      {
        int temp = num[j - 1]; 
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}

void shekerSort(double *mass, int count)
{
  int left = 0, right = count - 1; 
  int flag = 1;  
  
  while ((left < right) && flag > 0)
  {
    flag = 0;
    for (int i = left; i<right; i++)  
    {
      if (mass[i]>mass[i + 1]) 
      {             
        double t = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = t;
        flag = 1;      
      }
    }
    right--; 
    for (int i = right; i>left; i--)  
    {
      if (mass[i - 1]>mass[i]) 
      {            
        double t = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = t;
        flag = 1;    
      }
    }
    left++; 
  }
}

void inclusionSort(int *num, int size)
{

  for (int i = 1; i < size; i++)
  {
    int value = num[i]; 
    int index = i;     
    while ((index > 0) && (num[index - 1] > value))
    {   
      num[index] = num[index - 1];
      index--;    
    }
    num[index] = value; 
  }
}

void quickSort(int *numbers, int left, int right)
{
  int pivot; // разрешающий элемент
  int l_hold = left; //левая граница
  int r_hold = right; // правая граница
  pivot = numbers[left];
  while (left < right) // пока границы не сомкнутся
  {
    while ((numbers[right] >= pivot) && (left < right))
      right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
    if (left != right) // если границы не сомкнулись
    {
      numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
      left++; // сдвигаем левую границу вправо
    }
    while ((numbers[left] <= pivot) && (left < right))
      left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
    if (left != right) // если границы не сомкнулись
    {
      numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
      right--; // сдвигаем правую границу вправо
    }
  }
  numbers[left] = pivot; // ставим разрешающий элемент на место
  pivot = left;
  left = l_hold;
  right = r_hold;
  if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
    quickSort(numbers, left, pivot - 1);
  if (right > pivot)
    quickSort(numbers, pivot + 1, right);
}

int main ()
{
    int arr[SIZE];
    int arr2[SIZE];
    int arr3[SIZE];
    int arr4[SIZE];
    srand(time(NULL));
    for( int i=0; i<SIZE;i++)
    {
        arr4[i]=arr3[i]=arr2[i]=arr[i]=1+ rand();
       /* printf( " %d", arr[i]);
        printf( " %d", arr2[i]);
        printf( " %d", arr3[i]);  */                 /////   enter array      ////////
    }
    //printf( " \n");
    clock_t begin = clock();
    bubbleSort(arr, SIZE);
    /*for (int i = 0; i<SIZE; i++)
    {                                                           comment
        printf("%d ", arr[i]);             ////////////////  exit array    /////////////////
    }
    printf( " \n");
    printf( " \n");*/
    clock_t end = clock();
    int time_spent =(int) (end-begin);
    printf( "time_bubbleSORT = %d mks\n", time_spent);
    clock_t begin2 = clock();
    shekerSort(arr2, SIZE);
    clock_t end2 = clock();
    int time_spent2 =(int) (end2-begin2);
    printf( "time_shekerSORT = %d mks\n", time_spent2);
    clock_t begin3 = clock();
    inclusionSort(arr3, SIZE);
    clock_t end3 = clock();
    int time_spent3 =(int) (end3-begin3);
    printf( "time_inclusionSORT = %d mks\n", time_spent3);
    clock_t begin4 = clock();
    quickSort(arr4,0, SIZE-1);
    clock_t end4 = clock();
    int time_spent4 =(int) (end4-begin4);
    printf( "time_quickSORT = %d mks\n", time_spent4);  
    return 0;
}

