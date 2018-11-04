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

typedef std::vector<std::vector<double>> Matrix;

void print(const Matrix &m);

template <typename T>
void print(const std::vector<T> &vec);

void scalar();
int scalar(const std::vector<int> &vec1, const std::vector<int> &vec2);

std::size_t user_input();
void user_input(const std::string &vector_desc, std::vector<int> &vec);

Matrix input_matrix(Matrix matrix);
Matrix input_matrix(std::string matrix_no);

Matrix multiply_matrices(const Matrix &m1, const Matrix &m2);

int main(int argc, const char * argv[]) {
//    scalar();
    Matrix m1 = input_matrix("1");
    Matrix m2 = input_matrix("2");
    
    Matrix res = multiply_matrices(m1, m2);
    
    print(res);

    
    return 0;
}

Matrix input_matrix(std::string matrix_no) {
    std::size_t lines(0);
    std::size_t columns(0);
    
    std::cout << "input numbers of lines for matrix " << matrix_no << ": ";
    std::cin >> lines;
    
    std::cout << "input numbers of columns for matrix " << matrix_no << ": ";
    std::cin >> columns;
    
    Matrix matrix(lines, std::vector<double>(columns));
    Matrix full_matrix = input_matrix(matrix);
    
    return full_matrix;
}

Matrix input_matrix(Matrix matrix) {
    for (std::size_t i(0); i < matrix.size(); ++i) {
        for (std::size_t j(0); j < matrix[i].size(); ++j) {
            std::cout << "value for [" << i << ", " << j << "] = " << std::flush;
            std::cin >> matrix[i][j];
        }
    }
    
    return matrix;
}

Matrix multiply_matrices(const Matrix &m1, const Matrix &m2) {
    Matrix res(m1.size(), std::vector<double>(m2[0].size()));
    
    for (size_t i(0); i < m1.size(); ++i) {
        for(size_t j(0); j < m2[0].size(); ++j) {
            res[i][j] = 0.0;
            for(size_t k(0); k < m2.size(); ++k) {  //  m2.size = m1[0].size;
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    return res;
}

void print(const Matrix &matrix) {
    for (std::size_t i(0); i < matrix.size(); ++i) {
        for (std::size_t j(0); j < matrix[i].size(); ++j) {
            std::cout << "[" << i << ", " << j << "] = " << matrix[i][j] << std::endl;
        }
    }
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
