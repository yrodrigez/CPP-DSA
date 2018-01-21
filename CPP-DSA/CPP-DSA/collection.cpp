#include "stdafx.h"
#include "collection.h"
#include "node.h"
#include <stdexcept>


	template <class T>
	Collection<T>::Collection() {
		this->size = 0; 
		this->root = new Node<T>();
		this->next = this->root;
	}
	/* Ensures that this collection contains the specified element (optional operation).
	* Returns true if this collection changed as a result of the call.
	* Collections that support this operation may place limitations on what elements may be added to this collection.
	* In particular, some collections will refuse to add null elements, and others will impose restrictions on the type of elements that may be added.
	* Collection classes should clearly specify in their documentation any restrictions on what elements may be added.
	* If a collection refuses to add a particular element for any reason other than that it already contains the element, it must throw an exception (rather than returning false).
	* This preserves the invariant that a collection always contains the specified element after this call returns.
	*/
	template <class T>
	bool Collection<T>::add(T const& value) {
		this->next->setValue(value);
		Node<T>* newNext = new Node<T>();
		this->next->setNext(newNext);
		this->next = this->next->getNext();
		this->size++;
		return true;
	}

	template <class T>
	T Collection<T>::get(int const& position) {
		if (position <= this->size) {
			Node<T>* node = this->root;
			for (int i = 0; i < this->size; ++i) {
				if (i == position) return node->getValue();
				node = node->getNext();
			}
		}
		else {
			throw std::invalid_argument("MAMAHUEVO PON UN VALOR GÜENO");
		}
	}


	/* Adds all of the elements in the specified collection to this collection (optional operation).
	* The behavior of this operation is undefined if the specified collection is modified while the operation is in progress.
	* (This implies that the behavior of this call is undefined if the specified collection is this collection, and this collection is nonempty.)
	*/
	template <class T>
	bool Collection<T>::addAll(Collection<T> const& collection) {
		int max = collection.getSize();
		for (int i = 0; i < max ; i++) this->add( collection.get(i) );
		return true;
	}

	/* Removes a single instance of the specified element from this collection, if it is present (optional operation).
	* More formally, removes an element e such that (o==null ? e==null : o.equals(e)), if this collection contains one or more such elements.
	* Returns true if this collection contained the specified element (or equivalently, if this collection changed as a result of the call).
	*/
	template <class T>
	bool Collection<T>::remove(T const&) {
		return true;
	}

	/*Removes all of this collection's elements that are also contained in the specified collection (optional operation).
	* After this call returns, this collection will contain no elements in common with the specified collection.
	*/
	template <class T>
	bool Collection<T>::removeAll(Collection const&) {
		return true;
	}

	/* Removes all of the elements from this collection (optional operation). The collection will be empty after this method returns. */
	template <class T>
	void Collection<T>::clear() {
		
	}

	/* Returns true if this collection contains the specified element.
	* More formally, returns true if and only if this collection contains at least one element
	*/
	template <class T>
	bool Collection<T>::contains(T const&) const {
		return true;
	}

	/* Returns true if this collection contains all of the elements in the specified collection. */
	template <class T>
	bool Collection<T>::containsAll(Collection<T> const&) const {
		return true;
	}

	/* Returns true if this collection contains no elements. */
	template <class T>
	bool Collection<T>::isEmpty() const {
		return true;
	}

	/* Returns the number of elements in this collection. If this collection contains more than Integer.MAX_VALUE elements, returns Integer.MAX_VALUE. */
	template <class T>
	int  Collection<T>::getSize() const {
		return this->size;
	}