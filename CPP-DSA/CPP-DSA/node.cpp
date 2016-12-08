#include "stdafx.h"
#include "node.h"
#include <iostream>

	template <class T>
	Node<T> :: Node(T const& value) {
		this->value = value;
	}

	template <class T>
	Node<T> :: ~Node() {
		std::cout << "Jose es marico y destruye cosas";
	}


	template <class T>
	T const Node<T>::getValue() {
		return this->value;
	}

	template <class T>
	void Node<T> :: setValue(T const& value) {
		this->value = value
	}
