#pragma once
#ifndef AE_MATH_H
#define AE_MATH_H

namespace AlphaEngine { namespace Math
{
	struct Vector2
	{
		float x, y;
	};

	struct Vector3
	{
		float x, y, z;
	};
	
	Vector3 xAxis(float x) { return {x, 0, 0}; }
	Vector3 yAxis(float y) { return {0, y, 0}; }
	Vector3 zAxis(float z) { return {0, 0, z}; }
	
} } // end of namespace

#endif // AE_MATH_H
