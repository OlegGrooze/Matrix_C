#include "s21_matrix.h"

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int ret = 0;
  if (s21_is_emty(A)) {
    s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        result->matrix[i][j] += A->matrix[i][j] * number;
      }
    }
  } else {
    ret = 1;
  }
  return ret;
}
