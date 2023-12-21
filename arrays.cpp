/*#include <iostream>

int main() {
    int arr[5];
    int a1, a2, a3, a4, a5;
    
    std::cout << "Enter digit 1: ";
    std::cin >> a1;

    std::cout << "Enter digit 2: ";
    std::cin >> a2;

    std::cout << "Enter digit 3: ";
    std::cin >> a3;

    std::cout << "Enter digit 4: ";
    std::cin >> a4;

    std::cout << "Enter digit 5: ";
    std::cin >> a5;
    
    arr[0] = a1;
    arr[1] = a2;
    arr[2] = a3;
    arr[3] = a4;
    arr[4] = a5;

    
    for( int i = 0; i <5; i++){
        std::cout << arr[i];
    }

}*/

#include <iostream>

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++){
        std::cout <<"Enter digit " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    for(int i = 0; i<5; i++){
        std::cout << &arr[i] << "\n"; 
    }
}