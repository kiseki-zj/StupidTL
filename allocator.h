#include <cstddef>


namespace SpTL
{

template<class T>
class allocator {
public:
	typedef T			value_type;
	typedef T*			pointer;
	typedef const T*	const_pointer;
	typedef T&			reference;
	typedef const T&	const_reference;
	typedef size_t		size_type;
	typedef ptrdiff_t	difference_type;
public:
	static pointer allocate(size_t n);
	static void deallocate(pointer ptr, size_t n);
};
template<class T>
T* allocator<T>::allocate(size_t n) {
	T* temp = (T*)::operator new(n*sizeof(T));
	return temp;
}
template<class T>
void allocator<T>::deallocate(T* ptr, size_t n) {
	delete ptr;
}

}
