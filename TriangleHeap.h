#pragma once
class TriangleHeap
{

private:
	float* mBase, * mHeight;
public:
	TriangleHeap(float b, float h)
	{
		setBase(b);
		setHeight(h);
	}
	void setBase(float b)
	{
		mBase = new float;
		*mBase = b;
	}
	void setHeight(float h)
	{
		mHeight = new float;
		*mHeight = h;
	}
	float GetArea()
	{
		float a;
		a = 1.0 / 2.0 * (*mBase) * (*mHeight);
		return a;
	}


};

