//Binary Search

// w-case  O(log n)
// b-case  o(1)
// a-case  O(log n)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int lower, int upper, int item)
{
    while (lower <= upper)
    {
        int mid = lower + (upper - lower) / 2;
        if (arr[mid] == item)
            return mid;
        if (arr[mid] < item)
            lower = mid + 1;
        else
            upper = mid - 1;
    }
    return -1;
}

int main()
{
    int item;
    int arr[10];

    cout << "Enter 10 Elements:";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "\nEnter Element to search: ";
    cin >> item;

    int result = binarySearch(arr, 0, 9, item);
    (result == -1) ? cout << "Element not found in array"
                   : cout << "Element found at index " << (result + 1);

    return 0;
}
