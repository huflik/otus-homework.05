#pragma once

#include "primitive.h"
class Circle : public Primitive {
public:
    void draw() const override {
        std::cout << "circle renderer" << std::endl;
    }
};