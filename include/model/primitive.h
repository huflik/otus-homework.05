#pragma once

class Primitive{
public:
    virtual ~Primitive() = default;
    virtual void draw() const = 0;
};