/*
 * Rendere.h
 * 
 * This file is part of the "AcousticsLib" project (Copyright (c) 2016 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef __AC_RENDERER_H__
#define __AC_RENDERER_H__


#include "Export.h"

#include <vector>
#include <Gauss/Vector2.h>


namespace Ac
{


/**
\brief Renderer interface used in conjunction with the Visualizer.
\see Visualizer
*/
class AC_EXPORT Renderer
{

    public:

        virtual ~Renderer()
        {
        }
    
        virtual void BeginDrawing(const Gs::Vector2ui& size) = 0;
        virtual void EndDrawing() = 0;
    
        virtual void DrawLineList(const std::vector<Gs::Vector2i>& vertices) = 0;
        virtual void DrawLineStrip(const std::vector<Gs::Vector2i>& vertices) = 0;
    
};


} // /namespace Ac


#endif



// ================================================================================
