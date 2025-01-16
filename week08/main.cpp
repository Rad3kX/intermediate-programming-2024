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
        int b = data[i];
        s = s + b;
    }
    return s;
}

float average(std::vector<int> data) {
    int total = data.size();
    float avg;
    float s = 0;
    for(std::size_t i = 0; i < data.size(); i++){
        int b = data[i];
        s = s + b;
    }
    avg = (s/total);
    return avg;
}

float median(std::vector<int> data) {   //lichý --> prostredni hodnota, sudy --> průměr dvou prostředních  0(1), 1(3), 2(4)
    float median;
    int center;
    if(data.size()%2 ==0){
        center = data.size()/2;
        median = data[center];
    }
    else{
        center = data.size()/2;
        median = (data[center] + data[center+1])/2;  
    }
    return median;
}
//prvky do pole --> pole.push_back(5)

std::vector<int> range(int start, int end) {
    int delta =  end - start;
    std::vector<int> range2;
    if(delta>0){
        range2.resize(0);
        for(int i = start; i<end; i++){
            range2.push_back(i);
        }
    } else if(delta ==0){
        range2.resize(0);

    }
    else{
        int a = delta;
        delta = abs(a);
        range2.resize(0);
        for(int x = start; x > end; x--){
            range2.push_back(x);
        }
    }
    return range2;
}

std::vector<int> runningSum(std::vector<int> data) {
    int a =0;
    std::vector<int> suma;
    //suma.resize(0);
    //suma.push_back(data[0]);
    for(std::size_t i = 0; i < data.size()-1; i++){
        a += data[i];
        suma.push_back(a);
    }

    return suma;
}

std::vector<int> rotateRight(std::vector<int> data, int count) {
    int n = data.size();
    count = count % n;
    std::vector<int> zmena(count);

    for(int i = 0; i < count; i++){
        zmena[i] = data[n - count + i];
    }

    for(int i = n - 1; i >= count; i--){
        data[i] = data[i - count];
    }

    for(int i = 0; i < count; i++){
        data[i] = zmena[i];
    }

    return data;
}

int main() {
    std::vector<int> vec1 = { 1, 9, 4, 8, 4, 0, 9, 2, 3, 5, 6 };
    std::vector<int> asc1 = { 0, 2, 4, 7, 8 };
    std::vector<int> asc2 = { 1, 3, 5, 6, 7, 9 };

    std::cout << "sum(vec1): " << sum(vec1) << std::endl;
    std::cout << "average(vec1): " << average(vec1) << std::endl;
    std::cout << "median(asc1): " << median(vec1) << std::endl;

    std::cout << "range(5, 10): ";
    print(range(5, 10));
    std::cout << std::endl;

    std::cout << "range(11, 4): ";
    print(range(11, 4));
    std::cout << std::endl;

    std::cout << "runningSum(vec1): ";
    print(runningSum(vec1));
    std::cout << std::endl;
    std::vector<int> result = rotateRight(vec1, 3);

    std::cout << "pole po posunu: [ ";
    for (std::size_t i = 0; i < result.size(); i++) {
        if (i < result.size() - 1) {
            std::cout << result[i] << ", ";
        } else {
            std::cout << result[i] << " ]" << std::endl;
        }
    }

    return 0;
}