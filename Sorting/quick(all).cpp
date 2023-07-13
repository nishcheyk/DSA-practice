#include <iostream>
 using namespace std;
void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
    cout << array[i] <<endl;
}

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[high];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (array[i] >= array[j])
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }

    if (j >low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main()
{
    int array[] = {19,5,6,3,8,2,7,2,601,2222,4,21};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "Before Quick Sort :" <<endl;
    printArray(array, n);

    quickSort(array, 0, n-1);

    cout << "After Quick Sort :" << endl;
    printArray(array, n);
    return (0);
}