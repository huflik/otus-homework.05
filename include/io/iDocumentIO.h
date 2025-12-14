#pragma once
#include <memory>
#include <string>

class Document;

class IDocumentIO {
public:
    virtual ~IDocumentIO() = default;

    virtual std::shared_ptr<Document> load(const std::string& path) = 0;
    virtual void save(const Document& doc, const std::string& path) = 0;
};