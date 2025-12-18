#include <iostream>
#include "controller/editorController.h"
#include "view/plugDocumentRenderer.h"
#include <io/fileDocumentIO.h>

void guiRender(const EditorController& controller, const IDocumentRenderer& renderer) {
    if(auto doc = controller.document()) {
        renderer.render(*doc);
    }
}
int main() {

    auto io = std::make_shared<FileDocumentIO>();
    EditorController controller(io);
    PlugDocumentRenderer renderer;

    controller.newDocument();
    controller.addCircle();
    controller.addLine();
    controller.addRectangle();
    guiRender(controller, renderer);
    controller.save("plug.jpg");  
    controller.removePrimitive(0);
    guiRender(controller, renderer);
    
    return 0;
}