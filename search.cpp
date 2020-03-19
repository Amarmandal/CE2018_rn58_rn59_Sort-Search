// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {14, 16, 71, 76, 201};
    int x{0};
    cout << "Enter the number to be searched\n";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    if( result == -1)
        cout << x << " is not present in array\n";
    else
        cout << x << " is present at index " << result << endl;

    return 0;
}
