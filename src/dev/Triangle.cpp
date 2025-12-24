// Created by Joshua Cruz on 12/23/25.
//
#include "../../include/dev/Triangle.hpp"

#include <iostream>
#include <ostream>

namespace rampup {
Triangle::Triangle(uint32_t length, uint32_t height, uint32_t Hypotnuse) : length(length), height(height), Hypotnuse(Hypotnuse) {}

uint32_t Triangle::getArea() {
    const uint32_t Area = (1/2) * length * height;
    return Area;
}

uint32_t Triangle::getPerimeter() {
    const uint32_t perimeter = (length * 2) + (height * 2);
    return perimeter;
}

uint32_t Triangle::getWidth() {
    std::cout << height << std::endl;
    return -1;
}
uint32_t Triangle::getHypotnuse() {
    std::cout << Hypotnuse << std::endl;
    return -1;
}

uint32_t Triangle::getLength() {
    std::cout << length << std::endl;
    return -1;
}

}