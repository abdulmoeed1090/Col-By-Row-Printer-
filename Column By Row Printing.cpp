#include <iostream>
using namespace std;
// main function
int main()
{
    // variables
    int row, col;
    cout << "Enter the number of the rows:";
    cin >> row;
    cout << "Enter the number of the columns:";
    cin >> col;
    // using for-loop
    for (int i = 1; i <= row; i++)
    {
        int tempCount = i;
        cout << tempCount;
        // 1st level nested for-loop
        for (int j = 0; j < col - 1; j++)
        {
            tempCount += row;
            cout << ", ";
            cout << (tempCount);
        }
        cout << endl;
    }
    return 0;
}