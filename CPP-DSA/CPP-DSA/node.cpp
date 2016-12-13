#include "stdafx.h"
#include "node.h"

	template <class T>
	Node<T>::Node() {
	
	}

	template <class T>
	Node<T> :: Node(T const& value) {
		this->value = value;
	}

	template <class T>
	Node<T>::~Node() {
		~T();
	}


	template <class T>
	T const Node<T>::getValue() {
		return this->value;
	}

	template <class T>
	void Node<T>::setValue(T const& value) 
	{
		this->value = value;
	}

	template<class T>
	void Node<T>::setNext(Node<T> * next)
	{
		this->next = next;
	}

	template<class T>
	Node<T>* Node<T>::getNext()
	{
		return this->next;
	}
