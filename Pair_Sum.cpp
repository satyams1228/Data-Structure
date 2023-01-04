// Aproach
// Two way Pointer


#include <iostream>
using namespace std;

int main()
{
    
  
    int arr[] = {1, 3, 5, 7, 10, 11, 12, 13};
    int sum_value = 16;
    int i = 0;
    int j = sizeof(arr) / sizeof(int) - 1;
    cout<<"at value "<<sum_value;
    while (i < j)
    {

        int current_sum = arr[i] + arr[j];
        if (current_sum > sum_value)
        {

            j--;
        }
        else if (current_sum < sum_value)
        {
            i++;
        }
        else if (current_sum == sum_value)
        {
            cout << arr[i] << "and " << arr[j] << endl;
            i++;
            j--;
        }
    }
}
