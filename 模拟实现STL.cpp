using namespace std;
template<class T>
class myvector
{
public:
	typedef T* iterator;
	myvector()
	:_start(nullptr)
	,finish(nullptr)
	, capacity(nullptr)
	{}
	myvector(const myvector<T>& v)
	{
		_start = new T[v.size()];
		_finish = _start + v.size();
		_capacity = _start + v.size();
		memcpy(_start, v._start, sizeof(T)*v.size());
	}
	myvector<T>& operator=(myvector<T> v)//&？
	{
		this->swap(v);
		return *this;
	}
	void reserve(size_t n)
	{
		if (n > capacity())
		{
			size _t sz = size();
			T* tmp = new T[n];
			if (_start)
			{
				memcpy(tmp, _start, sz*sizeof(T));
				delete[] _start;
			}
			_start = tmp;
			_finish = _start + sz;
			_capacity = _start + n;
		}
	}
	void push_back(const T& x)
	{
		if (_finish == _capacity)
		{
			size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
			reserve(newcapacity);
		}
		*_finish = x;
		_finish++;
	}

	void swap(myvector<T>& v)
	{
		::swap(_start, v._start);
		::swap(_finish, v._finish);
		::swap(capacity, v._capacity);
	}
	~myvector()
	{
		delete[] _start;
		_start = _finish = nullptr;
	}
	iterator begin()
	{
		return _start;
	}
	iterator end()
	{
		return _finish;
	}
	size_t size()const
	{
		return _finish - _start;
	}
	size_t capacity()const
	{
		return _capacity - _start;
	}
private:
	iterator _start;
	iterator _finish;
	iterator _capacity;
};
class mystring
{
public:
	typedef char* iterator;
	mystring(const char* str = "")
		:_size(strlen(str))
	{
		_str = new char[_size + 1];
		strcpy(_str,str);
	}
	~mystring()
	{
		delete[] _str;
		_str = nullptr;
		_size = 0;
	}
	mystring(const mystring& s)
	{
		_size = s._size;
		_str = new char[_size + 1];
		strcpy(_str, s._str);
	}
	mystring& operator=(const mystring& s)
	{
		if (this != &s)
		{
			delete[] _str;
			_size = s._size;
			_str = new char[_size + 1];
			strcpy(_str, s._str);
		}
		return *this;
	}
private:
	char* _str;
	size_t _size;
};