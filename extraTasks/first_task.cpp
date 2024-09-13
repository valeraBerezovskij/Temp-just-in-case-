#include "first_task.h"

namespace ft {
	void init_array(int* arr, int size) {
		for (int i = 0; i < size; ++i) {
			arr[i] = i + 1;
		}
	}

	void print_array(int* arr, int size) {
		for (int i = 0; i < size; ++i) {
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	}

	void run() {
		int M = 0, N = 0;
		std::cout << "Enter M size: "; std::cin >> M;
		std::cout << "Enter N size: "; std::cin >> N;

		int* A = new int[M];
		int* B = new int[N];
		init_array(A, M);
		init_array(B, N);

		int K = M + N;
		int* C = new int[K];
		for (int i = 0; i < M; ++i) {
			C[i] = A[i];
		}
		int index = 0;
		for (int i = M; i < K; ++i) {
			C[i] = B[index];
			++index;
		}

		std::cout << "Array A: "; print_array(A, M);
		std::cout << "Array B: "; print_array(B, N);
		std::cout << "Array C: "; print_array(C, K);

		delete[] A;
		delete[] B;
		delete[] C;
	}
}