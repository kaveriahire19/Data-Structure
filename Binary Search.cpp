#include <iostream>

int binarySearch(int *array, int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (array[middle] == target)
            return middle;
        else if (array[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}

int binarySearchFirst(int *array, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (array[middle] == target)
        {
            first = middle;
            high = middle - 1;
        }
        else if (array[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return first;
}

int binarySearchLast(int *array, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (array[middle] == target)
        {
            last = middle;
            low = middle + 1;
        }
        else if (array[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return last;
}

int main()
{
    int array[] = {1, 5, 12, 48, 49, 49, 49, 50, 50, 65, 89};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << "Value found at Index: " << binarySearch(array, n, 65) << std::endl;
    std::cout << "Value found at first Index: " << binarySearchFirst(array, n, 49) << std::endl;
    std::cout << "Value found at last Index: " << binarySearchLast(array, n, 49) << std::endl;
    return 0;
}
