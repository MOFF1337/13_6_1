#include <iostream>
#include <vector>

int main() {
    int v_size;
    std::cout << "Input the vector size: ";
    std::cin >> v_size;

    std::vector<int> vec;
    int temp;
    while(vec.size() != v_size){
        std::cout << "Input the element to add: ";
        std::cin >> temp;
        vec.push_back(temp);
    }
    std::cout << "Input the element to delete: ";
    std::cin >> temp;

    std::vector <int> new_vec;
    for(int i = 0; i < v_size; i++){
        if(vec[i] != temp){
            new_vec.push_back(vec[i]);
            std::cout << vec[i];
        }
    }
    vec.swap(new_vec);
}
