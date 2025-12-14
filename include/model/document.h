#pragma once
#include <vector>
#include <memory>
#include "primitive.h"


class Document {
public:
    using PrimitivePtr = std::shared_ptr<Primitive>;

    void add(PrimitivePtr primitive) {
        primitives_.push_back(std::move(primitive));
                    std::cout << "Add primitive" << std::endl;
    }

    void remove(std::size_t indx) {
        if(indx < primitives_.size()) {
            primitives_.erase(primitives_.begin() + indx);
            std::cout << "Remove primitive" << std::endl;
        }
    }

    const std::vector<PrimitivePtr>& getItems() const {
        return primitives_;
    }

private:
    std::vector<PrimitivePtr> primitives_;
};