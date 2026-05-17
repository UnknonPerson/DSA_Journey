#include <stdio.h>
#include <stdbool.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

bool binarySearch(struct Array arr, int x)
{
    int i = 0, j = arr.length - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr.A[mid] == x)
        {
            return true;
        }
        else if (arr.A[mid] > x)
        {
            j = mid - 1;
        }
        else if (arr.A[mid] < x)
        {
            i = mid + 1;
        }
    }
}


int main()
{
    struct Array arr = {{1,25,29,30,35,45}, 20, 6};

    bool s = binarySearch(arr,0);
    printf("%d",s);
}