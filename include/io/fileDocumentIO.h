#pragma once
#include "iDocumentIO.h"
#include "model/document.h"

class FileDocumentIO : public IDocumentIO {
public:
    std::shared_ptr<Document> load(const std::string&) override {
        return std::make_shared<Document>();
    }

    void save(const Document&, const std::string&) override {}
};