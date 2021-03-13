#pragma once

class Vector2;

struct Matrix2D
{
	Matrix2D(double x1, double y1, double x2, double y2);

	Matrix2D();
	Matrix2D(Vector2 v1, Vector2 v2);

	double m00, m10, m01, m11;

	Matrix2D operator*(Matrix2D other);
};

