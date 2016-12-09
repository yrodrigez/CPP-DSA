#pragma once
#include "stdafx.h"
#include "node.h"

template <class T>
class Collection
{
public:

	/* Ensures that this collection contains the specified element (optional operation). 
	 * Returns true if this collection changed as a result of the call.
	 * Collections that support this operation may place limitations on what elements may be added to this collection. 
	 * In particular, some collections will refuse to add null elements, and others will impose restrictions on the type of elements that may be added. 
	 * Collection classes should clearly specify in their documentation any restrictions on what elements may be added.
	 * If a collection refuses to add a particular element for any reason other than that it already contains the element, it must throw an exception (rather than returning false). 
	 * This preserves the invariant that a collection always contains the specified element after this call returns.
	 */
	bool add(T const&);

	/* Adds all of the elements in the specified collection to this collection (optional operation). 
	 * The behavior of this operation is undefined if the specified collection is modified while the operation is in progress. 
	 * (This implies that the behavior of this call is undefined if the specified collection is this collection, and this collection is nonempty.)
	 */
	bool addAll(Collection<T> const&);

	/* Removes a single instance of the specified element from this collection, if it is present (optional operation). 
	 * More formally, removes an element e such that (o==null ? e==null : o.equals(e)), if this collection contains one or more such elements. 
	 * Returns true if this collection contained the specified element (or equivalently, if this collection changed as a result of the call).
	 */
	bool remove(T const&);

	/*Removes all of this collection's elements that are also contained in the specified collection (optional operation). 
	 * After this call returns, this collection will contain no elements in common with the specified collection.
	 */
	bool removeAll(Collection const&);

	/* Removes all of the elements from this collection (optional operation). The collection will be empty after this method returns. */
	void clear();

	/* Returns true if this collection contains the specified element. 
	 * More formally, returns true if and only if this collection contains at least one element 
	 */
	bool contains(T const&) const;

	/* Returns true if this collection contains all of the elements in the specified collection. */
	bool containsAll(Collection<T> const&) const;

	/* Returns true if this collection contains no elements. */
	bool isEmpty() const;

	/* Returns the number of elements in this collection. If this collection contains more than Integer.MAX_VALUE elements, returns Integer.MAX_VALUE. */
	int  size() const;


private:
	Node<T> node;
	int     size;
};
