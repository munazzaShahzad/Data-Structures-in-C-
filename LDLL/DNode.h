#pragma once

template <typename T>
struct DNode
{
	T info;
	DNode<T>* next;
	DNode<T>* prev;
	DNode();
	DNode(T val);
};

