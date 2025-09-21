#include <iostream.h>
#include <conio.h>

void main() {
    int i, j;
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    clrscr();   

    
    cout << "Enter elements of first 2x2 matrix:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    
    cout << "\nEnter elements of second 2x2 matrix:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

   
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
 
    cout << "\nSum of the two matrices:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << "\n";
    }

    getch();  
    
}