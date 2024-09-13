#include "second_task.h"

namespace st {
	void init_array(int* arr, int size) {
		for (int i = 0; i < size; ++i) {
			arr[i] = rand() % 100 + 1;
		}
	}

	void print_array(int* arr, int size) {
		for (int i = 0; i < size; ++i) {
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	}

	bool find_(int* arr, int size, int value) {
		for (int i = 0; i < size; ++i) {
			if (arr[i] == value) {
				return true;
			}
		}
		return false;
	}

	void run()
	{
		srand(time(NULL));
		int M = 0, N = 0;
		std::cout << "Enter M size: "; std::cin >> M;
		std::cout << "Enter N size: "; std::cin >> N;

		int* A = new int[M];
		int* B = new int[N];
		init_array(A, M);
		init_array(B, N);

		int K = 0;
		for (int i = 0; i < M; ++i) {
			if (find_(B, N, A[i])) { ++K; }
		}

		int index = 0;
		int* C = new int[K];
		for (int i = 0; i < M; ++i) {
			if (find_(B, N, A[i])) { 
				C[index] = A[i];
				++index;
			}
		}	

		std::cout << "Array A: "; print_array(A, M);
		std::cout << "Array B: "; print_array(B, N);
		std::cout << "Array C: "; print_array(C, K);

		delete[] A;
		delete[] B;
		delete[] C;
	}
}