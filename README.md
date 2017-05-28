LumenEngine
======
LumenEngine is a C++ OpenCL/CUDA graphics engine that aimed to produce photorealistic images using Path Tracing techniques on GPU.

Screenshot
------

* Cornell Box - 4K, 1024 samples, rendered in 60-70 seconds using a Nvidia GTX 970 :
![](https://image.ibb.co/n4yhLa/lumen_Render_SPEC.jpg)


How to use
------
GLEngine was written using Linux/Windows, QtCreator/Visual Studio as the IDE, CMake/QMake as the building tool, OpenCL 1.x and CUDA 7.x/Compute Capabilities 5.2 (can be probably lowered to 3.2 if your hardware is not recent enough) as the GPGPU APIs, and a C++11 compiler in mind.

Download the source, open the CMakeLists.txt/LumenEngine.pro file with QtCreator/Visual Studio, build the project, and everything should be ready to use.

Dependencies
------
- Window & Input system : GLFW/Qt5.x
- GUI system : dear imgui/Qt5.x
- OpenGL Function Loader : GLAD
- OpenGL Mathematic Functions : GLM
- GPGPU : OpenCL 1.x/CUDA 7.x
