#include "Framework.h"

template <typename T>
inline void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

bool IsInRange(const int& target, const int& minRange, const int& maxRange)
{
	int mn = min(minRange, maxRange);
	int mx = max(minRange, maxRange);

	return target >= mn && target <= mx;
}

void Shuffle(uint* arr, const uint& arr_length, const uint& n_shuffle)
{
	for (uint i = 0; i < n_shuffle; i++) {
		uint a, b;
		a = Math::Random(0U, arr_length - 1);
		b = Math::Random(0U, arr_length - 1);
		Swap(arr[a], arr[b]);
	}
}

void GetRandomsNoOverlap(int* arr, const uint& arr_length, const uint& num) {
	int pos = 0;
	for (uint cnt = 0; cnt < num; cnt++) {
		pos = Math::Random(cnt, arr_length-1);
		Swap(arr[cnt], arr[pos]);
	}
}

void WaitAnyKey() {
	std::cout << "계속하려면 아무 키나 누르시오\n";
	while(!_kbhit()) {}
}