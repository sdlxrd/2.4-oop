#pragma once

#include <iostream>

using namespace std;

class Vector
{
private:
	int* a;
	int size;
public:
	class OutOfBounds
	{
	private:
		int index;
	public:
		OutOfBounds(int i) : index(i) {}
		
		int getIndex() const { return index; }
		
		void setIndex(int index) { this->index = index; }
	};
	Vector();
	Vector(int);
	Vector(Vector&);
	~Vector() { if (a) delete[] a; }

	friend ostream& operator << (ostream&, const Vector&);
	friend istream& operator >> (istream&, Vector&);
	friend bool operator == (Vector&, Vector&);

	operator string() const;

	void Input(int);
	void AddVector(int n);

	Vector Multiply(int);
	double Norma();

	int& operator[] (int);
	const Vector& operator= (const Vector&);

	int getSize() const { return size; }
	int getA() const { return *a; }

	void setSieze(int size) { this->size = size; }
	void setA(int* a) { this->a = a; }
};

