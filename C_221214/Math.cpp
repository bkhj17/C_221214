#include "Framework.h"

int Math::Random(const int& mn, const int& mx) {
	int true_max = max(mx, mn);
	int true_min = min(mx, mn);

	return rand() % (true_max - true_min + 1) + true_min;
}
