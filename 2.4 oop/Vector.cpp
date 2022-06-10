#include "Vector.h"
#include <sstream>

Vector::Vector()
{
	a = 0;
	size = 0;
}

Vector::Vector(int n)
{
	a = new int[size = n];
}

Vector::Vector( Vector& vector)
{
	size = vector.size;
	
	a= new int[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = vector.a[i];
	}
}

Vector::operator string() const
{
	stringstream ss;
	
	for (int i = 0; i < size; i++)
	{
		ss << a[i] << ' ';
	}
	return ss.str();
}

void Vector::Input(int element)
{
	int* temp = new int[size + 1];
	
	if (a)
	{
		for (int i = 0; i < size; i++)
		{
			temp[i] = a[i];
		}
		delete[]a;
	}
	a = temp;
	a[size] = element;
	size++;
}

void Vector::AddVector(int n)
{
	a = new int[size = n];
	int p;
	for (int i = 0; i < size; i++)
	{
		cout << i+1 << ") element = "; cin >> p;
		a[i] = p;
	}
}

Vector Vector::Multiply(int k)
{
	Vector b;
	
	b = Vector(size);

	for (int i = 0; i < size; i++)
	{
		b[i] = a[i] * k;
	}
	return b;
}

double Vector::Norma()
{
	double q = 0;
	int min, max;

	if (a[1] > a[0])
	{
		max = a[1];
		min = a[0];
	}
	else
		{
		max = a[0];
		min = a[1];
		}

	return abs(max - min);
}

int& Vector::operator [](int index)
{
	if (index < 0 || index >= size)
		throw OutOfBounds(index);
	return a[index];
}

const Vector& Vector::operator =(const Vector& b)
{
	if (&b != this)
	{
		if (a)
			delete[] a;

		size = b.size;
		a = new int[size];

		for (int i = 0; i < size; i++)
			a[i] = b.a[i];
	}
	return *this;	
}

ostream& operator << (ostream& out, const Vector& x)
{
	out << string(x);
	return out;
}

istream& operator >> (istream& in, Vector& x)
{
	for (int i = 0; i < x.size; i++)
		in >> x.a[i];
	return in;
}

bool operator== (Vector& first, Vector& second)
{
	if (first.size != second.size)
		return false;
	for (int i = 0; i < first.size; i++)
	{
		if (first.a[i] != second.a[i])
			return false;
	}
	return true;
}