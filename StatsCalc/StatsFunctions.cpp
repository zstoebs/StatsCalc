//
// Created by Zachary Stoebner on 2019-06-06.
//

#include <iostream>
#include <cstddef>
#include <string>
#include <vector>
#include <fstream>

/*
* class constructor
* pre: class called
* post: data initialized
*/
template <typename T>
StatsFunctions<T>::StatsFunctions() {

    T in;
    size_t count = 1;

    do {

        std::cout << "Enter data point " << count << ": ";
        std::cin >> in;
        std::cout << in << std::endl;


    }

}

/*
 * alternate constructor
 * prompts for data points
 * pre: class called
 * post: data initialized to passed data
 */
template <typename T>
StatsFunctions<T>::StatsFunctions(const std::vector<T>& newData) : data(newData) {}


