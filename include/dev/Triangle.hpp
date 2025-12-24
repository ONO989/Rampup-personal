//
// Created by Joshua Cruz on 12/23/25.
//

#ifndef RAMPUP_TRIANGLE_H
#define RAMPUP_TRIANGLE_H

#include "Shape.hpp"
#include <cstdint>

namespace rampup {

/**
 * Represents a rectangle, defined as a width and height. Inherits from Shape class
 */
class Triangle : public Shape {
public:
    /**
     * Constructs a new triangle object with the given width and height
     *
     * @param[in] length
     * @param[in] height
     * @param[in] Hypotnuse
     */
    Triangle(uint32_t length, uint32_t height, uint32_t Hypotnuse);

    virtual uint32_t getLength();

    virtual uint32_t getWidth();

    virtual uint32_t getHypotnuse();


    // Overridden methods from Shape
    uint32_t getArea() override;

    uint32_t getPerimeter() override;

private:
    // one variable for triangle
    uint32_t length;
    uint32_t height;
    uint32_t Hypotnuse;

};

} // namespace rampup

#endif // RAMPUP_TRIANGLE_H
