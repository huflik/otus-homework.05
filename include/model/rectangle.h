#pragma once
#include "primitive.h"

class Rectangle : public Primitive {
    public:
    void draw() const override {
        std::cout << "rectangle renderer" << std::endl;
    }
};