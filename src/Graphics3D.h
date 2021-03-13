#pragma once
#ifndef GRAPHICS3D_H
#define GRAPHICS3D_H

#include "ae_std.h"
#include "ae_math.h"
#include "Scene.h"
#include <vector>

using namespace AlphaEngine::Math;
using namespace AlphaEngine;

namespace AlphaEngine { namespace Graphics {
	
	class Buffer
	{
	public:
	
		Buffer();
		~Buffer();
		
		void setData(Vector3 _data[]);
		
	private:
		Vector3 data[];
			
	};
	
	class Mesh : TransformableObject
	{
	public:
		
		Mesh();
		~Mesh();
		
	private:
		Buffer vertices, indices;	
	};
	
	class Cube : Mesh
	{
	public:
		
		Cube();
		~Cube();
		
	private:
		str texture_path;
	};
	
	class Model
	{
	public:
		
		Model();
		~Model();
		
		void import(str path);
		
		Mesh* getMeshes(); // return array
		int meshCount();
	
	private:
		str mdl_path;
	};
	
	class ModelObject : TransformableObject
	{
	public:
		
		ModelObject();
		~ModelObject();
		
	private:
		Model* mdl;
	};
	
	class Displacement : Mesh
	{
	public:
		
		Displacement();
		~Displacement();
		
	private:
	};
	
	
	
} } // end of namespaces

#endif // GRAPHICS3D_H
