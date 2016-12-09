#pragma once
 template <class T> 
 class Node
 {
 public:
	 Node(T const& value);
	 ~Node();
	 T const getValue();
	 void setValue(T  const&);
	 void setNext(Node const&);
	 Node getNext();

 private:
	 T value;
	 Node<T> next;
 };
