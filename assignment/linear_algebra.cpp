#include<iostream>
using namespace std;

double vector_times_vector(double* a, double* b, int N) {
    double result = 0;
    for (int i = 0; i < N; ++i) {
        result += a[i] * b[i];
    }
    return result;
}

double* matrix_times_vector(double* A, double* b, int N, int M) {
    double* result = new double[N];
    for (int i = 0; i < N; ++i) {
        result[i] = 0;
        for (int j = 0; j < M; ++j) {
            result[i] += A[i * M + j] * b[j];
        }
    }
    return result;
}

double* matrix_times_matrix(double* A, double* B, int N, int D, int M) {
    double* result = new double[N * M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            result[i * M + j] = 0;
            for (int k = 0; k < D; ++k) {
                result[i * M + j] += A[i * D + k] * B[k * M + j];
            }
        }
    }
    return result;
}

int main() {
    double a[3] = {1, 2, -1};
    double b[3] = {2, -2, 1};
    double A[2][3] = {{1, 1, 1}, {1, 2, 1}};
    double B[3][2] = {{0, 0}, {0, -1}, {1, 0}};

    double dotProduct = vector_times_vector(a, b, 3);
    cout << "Vector times vector: " << dotProduct << endl;

    double* A_times_b = matrix_times_vector((double*)A, b, 2, 3);
    cout << "Matrix times vector: ";
    for (int i = 0; i < 2; ++i) {
        cout << A_times_b[i] << " ";
    }
    cout << endl;
    delete[] A_times_b;

    double* A_times_B = matrix_times_matrix((double*)A, (double*)B, 2, 3, 2);
    cout << "Matrix times matrix: ";
    for (int i = 0; i < 2 * 2; ++i) {
        cout << A_times_B[i] << " ";
    }
    cout << endl;
    delete[] A_times_B;

    return 0;
}