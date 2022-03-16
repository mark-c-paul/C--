#include <string>
#include <iostream>

using namespace std;

int main(){
    int array[500], size;
    std::cin >> size;

    for(int i=0; i<size; i++){
        std::cin >> array[i];
    }

    for(int i=size; i>0; i--){
        std::cout << array[i-1] << " ";
    }

    return 0;
}