#pragma once
class FloatingNumbers
{
private:
	float* arr;
	int size;
public:
	FloatingNumbers();
	~FloatingNumbers();
	void storeNum(int i, float n);
	float getNum(int i);
	float getHighest();
	float getLowest();
};
