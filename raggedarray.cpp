/*#include <iostream>

int main() {
    
    int x,y;
    std::cin >> x, y;
    int arr[x][y];

    for(int i =0; i<x; i++){
        for(int j=0; j<y;j++){
            st
        }
    }
}\


#include <stdio.h>
#include <stlib.h>

int main(){
    int x, y, i, j;

    scanf("%d%d", &x,&y);

    int arr[x][y];
    for(i=0; i<x; i++){
        for(j=0;j<y;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int que;
    int ans =0;

    scanf("%d", &que);
    for(i=0;i<y;i++){
        ans+= arr[que][i];
    }
    printf("%d\n", ans);
    return 0;
}*/

/*#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    int **arr = new int*[x];
    for (int i = 0; i < x; ++i) {
        arr[i] = new int[y];
        for (int j = 0; j < y; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int que;
    int ans = 0;

    std::cin >> que;
    for (int i = 0; i < y; ++i) {
        ans += arr[que][i];
    }

    std::cout << ans << std::endl;

    // Release memory
    for (int i = 0; i < x; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    // Create 3 row arrays having different sizes (number of columns)
    int row1[] = {1, 2, 3, 4};
    int row2[] = {5, 6};
    int row3[] = {7, 8, 9};

    // Store the base address of each row array
    int* jagged[] = {row1, row2, row3};

    // Specify the sizes (number of columns) for each row
    int sizes[] = {4, 2, 3};

    cout << "Elements in matrix form as follows:" << endl;

    for (int i = 0; i < 3; i++) {
        int* ptr = jagged[i];

        for (int j = 0; j < sizes[i]; j++) {
            cout << *(ptr + j) << " ";
        }

        cout << endl;
    }

    // Get user input for the row index
    int rowIndex;
    cout << "Enter the row index to calculate the sum: ";
    cin >> rowIndex;

    // Validate the row index
    if (rowIndex >= 0 && rowIndex < 3) {
        // Calculate the sum of the specified row
        int rowSum = 0;
        for (int k = 0; k < sizes[rowIndex]; k++) {
            rowSum += jagged[rowIndex][k];
        }

        cout << "Sum of row " << rowIndex + 1 << ": " << rowSum << endl;
    } else {
        cerr << "Invalid row index." << endl;
    }

    return 0;
}

