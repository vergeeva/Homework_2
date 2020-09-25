#pragma once
#include "MyForm.h"
#include <math.h>
using namespace System;
using namespace System::IO;
#define MAX_SIZE 20
//1. Разработать класс «Множество» на основе массива с полной системой функций, включая
//интерфейсную функцию просмотра содержимого множества.
//2. Используя множество как структуру хранения данных, решить прикладную задачу.
//Дана последовательность чисел целого типа.Выделить из последовательности
//подмножество простых чисел, подмножество четных чисел.
ref class My_Set		// Множество на основе массива.
{
	array <int>^ A;
	int Count;
public:
	My_Set(void)
	{
		A = gcnew array <int>(MAX_SIZE);
		Count = 0;
	}
	My_Set(array <int>^ mas, int len)
	{
		
	}
	bool Is_Empty()
	{
		return Count == 0;
	}
	bool Is_Full()
	{
		return Count == MAX_SIZE - 1;	// Размер ограничен.
	}
	property int len
	{
		int get()
		{
			return Count;
		}
	}
	//Лен - получить длину множества

	int^ el(int i) //Можем взять элемент по индексу
	{
		return A[i];
	}
	// Одна из важных операций: проверка вхождения элемента во множество:
	// может быть типа bool, может быть типа int и возвращать индекс найденного.
	int In(int a)
	{
		for (int i = 0; i < Count; i++)
			if (A[i] == a)
				return i;
		return -1;
	}
	// Добавление элемента во множество. Как правило, элементы множества 
	// не повторяются, поэтому в алгоритме нужна проверка.
	bool Add(int a)
	{
		if (!Is_Full() && In(a) == -1)	// если не заполнено и такого элемента нет.
		{
			A[Count++] = a;
			return true;
		}
		else
			return false;
	}

	// Перегрузить операцию +, добавление во множество.
	My_Set^ operator + (int a)
	{
		if (!Is_Full() && In(a) == -1)
			A[Count++] = a;
		return this;
	}
	// Извлечение элемента из множества.
	bool Del(int a)
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
	// Перегрузить операцию -, извлечения из множества.
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

	void write_from_file(String^ File)
	{
		StreamReader^ SR = gcnew StreamReader(File);
		String^ str = gcnew String("");
		while (str = SR->ReadLine()) 
		{
			A[Count++] = Convert::ToInt32(str);
		}
		SR->Close();
	}
	void write_in_file(String^ File)
	{
		StreamWriter^ SW = gcnew StreamWriter(File);
		String^ line = gcnew String("");
		for (int i = 0; i < Count-1; i++)
		{
			line = Convert::ToString(A[i]) + "\n";
			SW->Write(line);
		}
		line = Convert::ToString(A[Count - 1]);
		SW->Write(line);
		SW->Close();
	}
	virtual String^ ToString() override 
	{
		String^ line = gcnew String("{ ");
		for (int i = 0; i < Count-1; i++)
		{
			line += Convert::ToString(A[i]) + ", ";
		}
		line += Convert::ToString(A[Count - 1]) + " }";
		return line;
	}

};