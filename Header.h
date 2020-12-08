#pragma once
#include "MyForm.h"
#include <math.h>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
#define MAX_SIZE 40
//1. Разработать класс «Множество» на основе массива с полной системой функций, включая
//интерфейсную функцию просмотра содержимого множества.
//2. Используя множество как структуру хранения данных, решить прикладную задачу.
//Дана последовательность чисел целого типа.Выделить из последовательности
//подмножество простых чисел, подмножество четных чисел.

ref class My_Set		// Множество на основе массива.
{
	array <int>^ A;
	int Count;
	bool Is_Empty()
	{
		return Count == 0;
	}
	bool Is_Full()
	{
		return Count == MAX_SIZE - 1;	
	}
	int In(int a)
	{
		for (int i = 0; i < Count; i++)
			if (A[i] == a)
				return i;
		return -1;
	}
public:
	My_Set(void)
	{
		A = gcnew array <int>(MAX_SIZE);
		Count = 0;
	}

	property int len
	{
		int get()
		{
			return Count;
		}
	}

	bool Add(int a)
	{
		if (!Is_Full() && In(a) == -1)	
		{
			A[Count++] = a;
			return true;
		}
		else
			return false;
	}

	My_Set^ operator + (int a)
	{
		if (!Is_Full() && In(a) == -1)
			A[Count++] = a;
		return this;
	}

	bool Delete(int a)
	{
		if (!Is_Empty())
		{
			if (In(a) != -1)
			{
				for (int i = In(a); i < Count - 1; i++)
					A[i] = A[i + 1];
				Count--;
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}

	My_Set^ operator -(int a)
	{
		if (!Is_Empty())
		{
			if (In(a) != -1)
			{
				for (int i = In(a); i < Count - 1; i++)
					A[i] = A[i + 1];
				Count--;
			}
			return this;
		}
	}

	My_Set^ operator =(My_Set ^other)
	{
		this->Count = other->Count;
		for (int i = 0; i < Count; i++)
		{
			this->A[i] = other->A[i];
		}
		return this;
	}
	int operator [](int i)
	{
		return A[i];
	}

	virtual String^ ToString() override 
	{
		String^ line = gcnew String("{ ");
		for (int i = 0; i < Count; i++)
		{
			line += Convert::ToString(A[i]) + ", ";
		}

		return line + " }";
	}

};