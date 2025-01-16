#include <iostream>
#include <vector>


void print(std::vector<int> data) {
    if (data.size() == 0) {
        std::cout << "[]";
        return;
    }

    std::cout << "[ ";
    for (std::size_t i = 0; i < data.size() - 1; i++) {
        std::cout << data[i] << ", ";
    }

    std::cout << data.back() << " ]";
}

int sum(std::vector<int> data) {
    int s = 0;
    for(std::size_t i = 0; i < data.size(); i++){
        s += data[i];
    }
    return s;
}

int multiple(std::vector<int> data) {
    int s = 1;
    for(std::size_t i = 0; i < data.size(); i++){
        s *= data[i];
    }
    return s;
}

std::vector<int> sum2(std::vector<std::vector<int>> b){
    std::vector<int> data;
    for(std::vector<int> a :b){
        data.push_back(sum(a));
    }
    return data;
}

std::vector<int> multi(std::vector<std::vector<int>> b){
    std::vector<int> data;
    for(std::vector<int> a :b){
        data.push_back(multiple(a));
    }
    return data;
}

void print2(std::vector<std::vector<int>> vec){
    std::cout << "{" << std::endl;
    for(std::vector<int> a: vec){
        print(a);
        std::cout << std::endl;
    }
    std::cout << "}" <<std::endl;
}
   /* std::vector<int> concat(std::vector<std::vector<int>> vec){
        std::vector<int> act;
        for(std::vector<int> a: act){
            for(std::vector <int> b : a){
                act.push_back(b);
            }
        }
        return act;
    }
    */

int main() {
    std::vector<std::vector<int>> a {{0, 1}, {2}};
    print2(a);
    std::vector<std::vector<int>> b {{0, 1}, {2}, {}};
    print(sum2(b));
    std::cout << std::endl;
    print(multi(b));
    //print(concat(a));
    
}