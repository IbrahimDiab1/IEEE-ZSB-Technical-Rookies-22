#ifndef DYN_READ_LINE_ARRAY_H
#define DYN_READ_LINE_ARRAY_H

#include <vector>
#include <iostream>
#include <sstream>
#include <string>

template<typename T>
std::vector<T> read_line_array()
{
    std::vector<T> arr;
    std::string line;
    std::getline(std::cin, line);

    std::stringstream line_stream;
    line_stream << line;

    T curr_val;
    while (line_stream >> curr_val) {
        arr.push_back(curr_val);
    }
    return arr;
}
#endif
