#pragma once

#include <iostream>
#include <cstring>

using std::cerr;
using std::cout;
using std::cin;
using std::endl;

class ElemStack
{
private:
	char el;
	ElemStack* ptrPrevEl;
	static size_t counter;

	ElemStack(const char c_Sym) : el{ c_Sym }, ptrPrevEl{ nullptr } {}
	friend class Stack;
};

size_t ElemStack::counter{ 0 };

class Stack
{
	ElemStack* top;
	const size_t maxLen;

public:
	Stack() : Stack(16) {}
	Stack(const size_t c_MaxLen) : maxLen{ c_MaxLen }, top{ nullptr } {}
	//=====================================================
	const bool	  isEmpty() const { return ElemStack::counter == 0; }
	const bool	   isFull() const { return ElemStack::counter == maxLen; }
	const size_t getCount() const { return ElemStack::counter; }
	//=====================================================
	void push(const char m_VAL)
	{
		if (isFull())
		{
			cerr << "FULL STACK"; return;
		}
		ElemStack* ptr = new ElemStack(m_VAL);
		ptr->ptrPrevEl = top;
		top = ptr;
		++ElemStack::counter;
	}
	//=====================================================
	void pop()
	{
		if (isEmpty())
		{
			cerr << "EMPTY STACK"; return;
		}
		ElemStack* ptr = top;
		top = top->ptrPrevEl;
		delete ptr;
		--ElemStack::counter;
	}
	//=====================================================
	void show() const
	{
		if (isEmpty())
		{
			cout << "Nothing to show...";
			return;
		}
		ElemStack* ptr = top;
		while (ptr)
		{
			cout << ptr->el << " ";
			ptr = ptr->ptrPrevEl;
		}
	}
	//=====================================================
	void clear()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
};

