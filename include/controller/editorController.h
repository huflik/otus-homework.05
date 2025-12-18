#pragma once

#include <memory>
#include "model/document.h"
#include "io/iDocumentIO.h"
#include "model/line.h"
#include "model/circle.h"
#include "model/rectangle.h"

class EditorController {
public:
    explicit EditorController(std::shared_ptr<IDocumentIO> io) : io_(std::move(io)) {}

    void newDocument() {
        std::cout << "New Document" << std::endl;
        document_ = std::make_shared<Document>();
    }

    void load(const std::string& path) {
        std::cout << "Load Document" << std::endl;
        document_ = io_->load(path);
    }

    void save(const std::string& path) const {
        if (document_) {  
            std::cout << "Save Document" << std::endl;      
            io_->save(*document_, path);
        }
    }

    void removePrimitive(std::size_t indx) {
        if(document_) {
            document_->remove(indx);
            std::cout << "Remove primitive" << std::endl;
        }
    }

    void addLine() {
        verifyDocument();
        document_->add(std::make_shared<Line>());
    }

    void addCircle() {
        verifyDocument();
        document_->add(std::make_shared<Circle>());
    }

        void addRectangle() {
        verifyDocument();
        document_->add(std::make_shared<Rectangle>());
    }

    const Document* document() const {
        return document_.get();
    }


private:
    std::shared_ptr<Document> document_;
    std::shared_ptr<IDocumentIO> io_;    

    void verifyDocument() {
        if (!document_) {
            newDocument();
        }
    }
};

