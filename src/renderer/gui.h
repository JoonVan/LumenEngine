#ifndef GUI_H
#define GUI_H

#include <iostream>
#include <fstream>
#include <vector>

#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>

#include "OCL.h"


class GUI
{
    public:
		GUI();

		void setupGUI();
		void renderGUI();
		void stopGUI();
		void setOCL(OCL* rendererOCL);
		void setRenderResolution(int width, int height);
		void aboutWindow(bool* guiOpen);
		void renderConfigWindow(bool* guiOpen);

		OCL interfaceOCL;

		int renderWidth = 800;
		int renderHeight = 600;
		int renderSamples = 128;
		int renderBounces = 4;

    private:
		bool aboutBool = false;
		bool renderBool = false;
};

#endif // GUI_H