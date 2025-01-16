#include <iostream>
#include <vector>

void print(std::vector<int> a){
   int i;
   std::cout << "[";
   for(int i =0; i < a.size(); i++){
      if (i==a.size()-1){
      std::cout << a[i] << "]";
      }
      else{
      std::cout << a[i] << ", ";
      }
   }  
}


int main(){   
     std::vector<int> a = {1,2,3,4};
     print(a);
}