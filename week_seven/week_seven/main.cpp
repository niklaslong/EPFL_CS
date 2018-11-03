//
//  main.cpp
//  week_seven
//
//  Created by Niklas on 01.11.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

template <typename T>
void print(const std::vector<T> &vec);

void scalar();
int scalar(const std::vector<int> &vec1, const std::vector<int> &vec2);

std::size_t user_input();
void user_input(const std::string &vector_desc, std::vector<int> &vec);

int main(int argc, const char * argv[]) {
    scalar();
    
    return 0;
}

template <typename T>
void print(const std::vector<T> &vec) {
    for (const auto &i : vec) {
        std::cout << i << std::endl;
    }
}

void scalar() {
    
    std::size_t n = user_input();
    std::vector<int> list1(n);
    std::vector<int> list2(n);
    
    user_input("first", list1);
    user_input("second", list2);
    
    std::cout << scalar(list1, list2);
}

int scalar(const std::vector<int> &vec1, const std::vector<int> &vec2) {
    int product(0);
    
    for (std::size_t i(0); i < vec1.size(); ++i) {
        product += (vec1[i] * vec2[i]);
    }
    
    return product;
}

std::size_t user_input() {
    std::size_t n(0);
    
    do {
        std::cout << "enter list size" << std::endl;
        std::cin >> n;
    } while (n < 1);
    
    return n;
}

void user_input(const std::string &vec_desc, std::vector<int> &vec) {
    std::cout << "for " << vec_desc << " vector:" << std::endl;
    
    for (size_t i(0); i < vec.size(); ++i) {
        std::cout << "input for: " << i << " index" << std::endl;
        std::cin >> vec[i];
    }
}
