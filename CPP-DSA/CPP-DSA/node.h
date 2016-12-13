#pragma once
 template <class T> 
 class Node
 {
 public:
	 Node();
	 Node(T const& value);
	 ~Node();
	 T const getValue();
	 void setValue(T  const&);
	 void setNext(Node<T> *);
	 Node<T>* getNext();

 private:
	 T value;
	 Node<T> *next;
 };
