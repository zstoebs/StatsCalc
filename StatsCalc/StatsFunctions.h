//
// Created by Zachary Stoebner on 2019-06-06.
//

#ifndef STATSCALC_STATSFUNCTIONS_H
#define STATSCALC_STATSFUNCTIONS_H

#include <stdio.h>
#include <cstddef>
#include <vector>

template <typename T>
class StatsFunctions {

private:

    //contains stats data points
    std::vector<T> data;

public:

    /*
    * class constructor
    * pre: class called
    * post: data initialized
    */
    StatsFunctions();

    /*
    * alternate constructor
    * prompts for data points
    * pre: class called
    * post: data initialized to passed data
    */
    StatsFunctions(T newData[]);





};

#include "StatsFunctions.cpp"
#endif //STATSCALC_STATSFUNCTIONS_H
