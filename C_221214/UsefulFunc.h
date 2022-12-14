#pragma once

template <typename T>
inline void Swap(T&, T&);

bool IsInRange(const int&, const int&, const int&);

void Shuffle(uint* arr, const uint& arr_length, const uint& n_shuffle);

void GetRandomsNoOverlap(int* arr, const uint& arr_length, const uint& num);