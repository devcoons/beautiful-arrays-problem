#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
	uint64_t t, i, k, num_tests, A_size, pos_ones, neg_ones;
	int64_t  A;

	scanf("%lld", &num_tests);

	for (t = 0; t < num_tests; t++)
	{
		scanf("%lld", &A_size);

		k = neg_ones = pos_ones = 0;

		for (i = 0; i < A_size; i++)
		{
			scanf("%lld", &A);

			k = A < -1 || A > 1 ? k + 1 : k;

			pos_ones = A == 1 ? pos_ones + 1 : pos_ones;

			neg_ones = A == -1 ? neg_ones + 1 : neg_ones;

		}

		if (k > 1 || (neg_ones >= 1 && k >= 1) || (neg_ones > 1 && pos_ones == 0))
			printf("no\n");
		else
			printf("yes\n");
	}

	return 0;
}
