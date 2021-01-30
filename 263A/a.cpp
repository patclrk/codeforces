#include <iostream>
using namespace std;

int findr(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        //cout << "array[i]: " << array[i] << endl;
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int row_moves(int row_index) {
    if(row_index > 2) {
        return row_index - 2;
    } else if (row_index < 2) {
        return (2 - row_index);
    } else {
        return 0;
    }
}

int col_moves(int col_index) {
    if(col_index > 2) {
        return (col_index - 2);
    } else if (col_index < 2) {
        return (2 - col_index);
    } else {
        return 0;
    }
}

int main()
{
    int arr[5][5];

    for (int i = 0; i < (sizeof arr / sizeof arr[0]); i++) {
        for (int j = 0; j < (sizeof arr / sizeof arr[0]); j++) {
            cin >> arr[i][j];
        }
    }

    //target is arr[2][2]
    //determine index of '1'
    int row_idx = -1;
    int column_idx = -1;
    for (int i = 0; i < (sizeof arr / sizeof arr[0]); i++) {
        row_idx = i;
        column_idx = findr(arr[i],5,1);
        if (column_idx >= 0) {
            break;
        }
    }
    //add or subtract from index to get to [2][2]
    int rm = row_moves(row_idx);
    int cm = col_moves(column_idx);

    cout << rm + cm << endl;



    // for (int i = 0; i < (sizeof arr / sizeof arr[0]); i++) {
    //     for (int j = 0; j < (sizeof arr / sizeof arr[0]); j++) {
    //         cout << "{" << arr[i][j] << "}" ;
    //     }
    //     cout << endl;
    // }
    return 0;
}