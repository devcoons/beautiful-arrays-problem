#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
	uint32_t t, i, j, k, num_tests, A_size;
	int32_t  A_k, *A;
	uint8_t result;

	scanf("%d", &num_tests);

	for (t = 0; t < num_tests; t++)
	{
		scanf("%d", &A_size);

		result = 0;

		A = (int32_t *)malloc(A_size * sizeof(int32_t));

		for (i = 0; i < A_size; i++)
			scanf("%d", &A[i]);

		for (i = 0; i < A_size - 1 && result == 0; i++)
			for (j = i + 1; j < A_size && result == 0; j++)
			{
				A_k = A[i] * A[j];
				result = 1;
				for (k = 0; k < A_size; k++)
					if (A_k == A[k])
					{
						result = 0;
						break;
					}
			}

		if (result == 0)
			printf("yes\n");
		else
			printf("no\n");

		free(A);
	}

	return 0;
}
