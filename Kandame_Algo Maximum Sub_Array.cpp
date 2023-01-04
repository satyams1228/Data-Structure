// Approach
// Negative Number set to be zero and take maximum_sum = max(current_sum, maximum_sum);

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Kandame_Algo Maximum Sub_Array
    int current_sum = 0;
    int maximum_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        maximum_sum = max(current_sum, maximum_sum);
    }
    cout<<"Maximum Sum " << maximum_sum<<endl;
}
