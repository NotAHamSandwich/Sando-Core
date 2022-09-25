#include <iostream>
#include <GL/glew.h>

#include "src/graphics/window.h"

int main()
{
    using namespace sando;
    using namespace graphics;

    Window window("Sando", 960, 540);
    glClearColor(0.2f,0.3f,0.8f,1.0f);
    
    while (!window.closed())
    {
        //std::cout << window.getWidth() << ", " << window.getHeight() << std::endl;
        window.clear();
        //glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
        window.update();
        
    }
    return 0;
}