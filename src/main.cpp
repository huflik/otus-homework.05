#include <iostream>
#include "controller/editorController.h"
#include "io/fileDocumentIO.h"

void guiNew(EditorController& controller) {controller.newDocument();}
void guiLoad(EditorController& controller) {controller.load("document.in");}
void guiSave(EditorController& controller) {controller.save("document.out");}
void guiAddLine(EditorController& controller) {controller.addLine();}
void guiAddCircle(EditorController& controller) {controller.addCircle();}
void guiDelete(EditorController& controller) {controller.removePrimitive(0);}

int main() {

    auto io = std::make_shared<FileDocumentIO>();
    EditorController controller(io);

    guiNew(controller);
    guiAddLine(controller);
    guiAddCircle(controller);
    guiSave(controller);
    guiDelete(controller);
    guiLoad(controller);

    return 0;
}