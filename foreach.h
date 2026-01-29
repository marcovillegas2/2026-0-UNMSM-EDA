#ifndef __FOREACH_H__
#define __FOREACH_H__

template <typename Iterator, typename FuncObj, typename ...Args>
void Foreach(Iterator begin, Iterator end, FuncObj fn, Args ...args){
    auto iter = begin;
    for(; iter != end ; ++iter)
        fn(*iter, args...);
}

template <typename Container, typename FuncObj, typename ...Args>
void Foreach(Container &container, FuncObj fn, Args ...args){
    Foreach(container.begin(), container.end(), fn, args...);
}

#endif