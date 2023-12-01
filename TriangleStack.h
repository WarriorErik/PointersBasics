#pragma once
class TriangleStack
{

private:
	float mBase, mHeight;
public:
	void setBase(float b)
	{
		mBase = b;
	}
	void setHeight(float h)
	{
		mHeight = h;
	}
	float GetArea()
	{
		float a;
		a = 1.0 / 2.0 * mBase * mHeight;
		return a;
	}




};

