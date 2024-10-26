#include <iostream>
using namespace std;

class ArrSum
{
    int *arr;
    int size; 
public:
    ArrSum(int *inputArray, int inputSize)
    {
        size = inputSize;
        arr = new int[size];
        for (int i = 0; i < size; ++i)
        {
            arr[i] = inputArray[i];
        }
    }

    ArrSum(const ArrSum &source)
    {
        size = source.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i)
        {
            arr[i] = source.arr[i];
        }
    }

    void display()
    {
        int sum = 0;
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] > 0)
            {
                sum += arr[i];
            }
        }
        cout << "Sum of all positive numbers: " << sum << endl;
    }

    ArrSum()
    {
        delete[] arr;
    }
};

int main()
{
    int array[] = {1, -2, 3, 4, -5};
    int size = sizeof(array) / sizeof(array[0]);
    ArrSum originalArray(array, size);
    ArrSum copyArray = originalArray;
    copyArray.display();

    return 0;
}
