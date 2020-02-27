#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int h, int key)
{
    int min, max, mid;
    min = l;
    max = h;
    while (max >= min)
    {
        mid = (min + max) / 2;
        if( key == a[mid])
        { 
            return mid;
        }

        if ( key > a[mid])
        {
            min = mid + 1;
            
        } else {
            max = mid - 1;
        }
    }
    return -1;
  
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5}, x, key;
    cout << "Enter Key to be searched" << endl;
    x = binarySearch(a, 0, 4, key);
    cout << binarySearch() << endl;
}
