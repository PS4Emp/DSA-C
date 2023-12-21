
#include <iostream>

int main() {

    int arr[2][3] = { {4,5,6}, {7,8,9}};
    int i, j;

    //int counter = 1;

    /*for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            arr[i][j] = counter;
            counter += 1;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << arr[i][j];
        }
    }   std::cout << "\n";*/
    std::cout << &arr<<"\n";
    for( int i = 0; i < 2; i++){
        for(int j =0; j < 3; j++){
            std::cout << &arr[i][j] << "\n";
        }
        
    }

    return 0;
}
