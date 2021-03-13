#pragma once
#ifndef SCENE_H
#define SCENE_H

#include "ae_std.h"
#include "ae_math.h"
#include <vector>

using namespace AlphaEngine::Math;
using namespace AlphaEngine;

namespace AlphaEngine { namespace Graphics {
	
	class Object3D
	{
	public:
		
		Object3D();
		~Object3D();
		
		void addChild(Object3D* child);
		void removeChild(Object3D* child);
		void setParent(Object3D* _parent);
		
	
	private:
		std::vector<Object3D*> children;
		Object3D* parent;	
	};
	
	class TransformableObject : Object3D 
	{
	public:
		
		TransformableObject();
		~TransformableObject();
		
		void move(Vector3 movement);
		void rotate(Vector3 rotation);
		
	protected:
		Vector3 position, rotation;
	};

	
	class Camera : TransformableObject
	{
	public:
		
		Camera();
		~Camera();
		
	private:
	};
	
	class Light : TransformableObject
	{
	public:
		Light();
		~Light();
		
	private:
	};
	
	// Scene - place where rendering objects
	class Scene
	{
	public:
		
		Scene();
		~Scene();
		
		void addCamera(Camera* cam);
		void addObject(Object3D* obj);
		
		void draw();
	
	private:
		std::vector<Object3D*> objects;	
	};
	
} } // end of namespaces

#endif // SCENE_H
