//just starting;

#include <iostream>

int LinearSearch(const int *arr, const int item){
    const int length = sizeof(arr) / sizeof(arr[0]);
    for(auto i = 0; i < length ; i ++){
        if(arr[i] == item){
            return i; 
        }
    }
    return -1;
}


int main(){

    int arr[]{10,20,30,40,50,60,70};
    int item = 60;
    std::cout << "Going to call Linear search" << std::endl;    
    auto result = LinearSearch(arr, item);
    if(result != -1){
        std::cout << "Result found at index " << result << std::endl;
    } 
}