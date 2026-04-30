#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "easyFind.tpp"

template <typename T>
typename T::iterator easyFind(T& container, int val);
