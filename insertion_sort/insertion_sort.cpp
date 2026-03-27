#include <iostream>

void InsertionSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j -= 1;
        }

        A[j + 1] = key;
    }
}

int main()
{
    int A[] = { 5, 2, 4, 6, 1, 3 };
    const int n = 6;

    std::cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n \n";

    InsertionSort(A, n);

    std::cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
}