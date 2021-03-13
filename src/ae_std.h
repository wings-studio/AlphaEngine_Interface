#pragma once
#ifndef AE_STD_H
#define Ae_STD_H

#include <vector>
#include <string>

#ifdef _WIN32
    #ifdef _WCHAR_T_DEFINED
        typedef wchar_t char_t;
    #else
        typedef unsigned short char_t;
    #endif
#else
    typedef char char_t;
#endif
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef std::basic_string<char_t> str;

namespace AlphaEngine
{

template<typename... T>
class Action
{
public:
	Action()
	{
	}
	Action(void(*func)(T...))
	{
		setFunc(func);
	}
	~Action()
	{
	}
	
	void setFunc(void(*func)(T...))
	{
		action = func;
	}
	void exec(T... param)
	{
		(*action)(param...);
	}
private:
	void(*action)(T...);	
};

template<typename... T>
class Event
{
public:
	Event()
	{
	}
	~Event()
	{
	}
	
	void addHandler(Action<T...> handler)
	{
		handlers.push_back(handler);
	}
	void exec(T... param)
	{
		for (int i = 0; i < handlers.size(); i++)
		{
			handlers[i].exec(param...);
		}
	}
private:
	std::vector<Action<T...> > handlers;
};

} // end of namespace

#endif // AE_STD_H
