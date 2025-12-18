#pragma once

#include "view/iDocumentRenderer.h"
#include "model/document.h"

class PlugDocumentRenderer final : public IDocumentRenderer {
public:
    void render (const Document& document) const override {
        for( const auto& primitive : document.getItems()) {
            primitive->draw();
        }
    }
};