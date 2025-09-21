#include <iostream.h>
#include <conio.h>

void main() {
    int n, i, sum = 0;
    float average;

    clrscr();   

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[50];   

 
    for(i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    average = (float)sum / n;

    
    cout << "\nSum of array elements = " << sum;
    cout << "\nAverage of array elements = " << average;

    getch();   
    
}