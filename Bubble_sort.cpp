#include <iostream>
using namespace std;

void Print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n -1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if (swapped == false)
        // {
        //     break;
        // }
    }
}

int main()
{
    int arr[10] = {7,4,6,8,2,1};
    int n = 6;
    Print_array(arr, n);
    Bubble_sort(arr, n);
    Print_array(arr,n);
}