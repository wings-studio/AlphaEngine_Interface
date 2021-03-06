#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include "ae_std.h"
#include "ae_math.h"
#include "Scene.h"

using namespace AlphaEngine::Math;
using namespace AlphaEngine;

namespace AlphaEngine { namespace Graphics {
	
	class Renderer
	{
	public:
		
		Renderer();
		~Renderer();
		
		void createScene();
		Scene* scene();
		void render();
	
	private:
		Scene rendering_scene;	
	};
	
} } // end of namespaces

#endif // RENDERER_H
