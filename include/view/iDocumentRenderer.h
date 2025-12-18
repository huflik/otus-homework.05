#pragma once

class Document;

class IDocumentRenderer {
public:
    virtual ~IDocumentRenderer() = default;
    virtual void render(const Document& document) const = 0;
};