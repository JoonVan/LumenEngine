#ifndef RENDERKERNEL_H
#define RENDERKERNEL_H

#include "object.h"


extern "C"
void lumenRender(int width, int height, int samples, int bounces, int sphereCount, SphereObject* spheresList);


#endif // RENDERKERNEL_H