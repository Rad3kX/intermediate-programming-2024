#include <iostream>
#include <vector>



bool palindrom(std::vector<int> palindrome){
    std::size_t x = palindrome.size();
    for(std::size_t i =0; i< x/2; i++){
        if(palindrome[i] != palindrome[x-i-1]){
            return false;
        }
    }
    return true;
}



int main() {
    std::vector<int> vec1 = { 1, 2, 2, 1, 3 };
    if(palindrom(vec1)){
        std::cout << "jj" << std::endl;
    }
    else {
        std::cout <<"nn" << std::endl;
    }
}
