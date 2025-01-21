#include <stdio.h>
#include <stdlib.h>

int column_statistics(const int *ptr, int width, int height, int column_id, int* max, int* min, float *avg) {
    if (ptr == NULL || width <= 0 || height <= 0 || column_id < 0 || column_id >= width || max == NULL || min == NULL || avg == NULL) {
        return 1;
    }
    *max = *(ptr + column_id);
    *min = *(ptr + column_id);
    int sum = 0;
    for (int i = 0; i < height; i++) {
        int value = *(ptr + i * width + column_id);
        if (value > *max) {
            *max = value;
        }
        if (value < *min) {
            *min = value;
        }
        sum += value;
    }
    *avg = (float)sum / height;
    return 0;
}
int row_statistics(const int *ptr, int width, int height, int row_id, int* max, int* min, float *avg) {
    if (ptr == NULL || width <= 0 || height <= 0 || row_id < 0 || row_id >= height || max == NULL || min == NULL || avg == NULL) {
        return 1;
    }
    *max = *(ptr + row_id * width);
    *min = *(ptr + row_id * width);
    int sum = 0;
    for (int i = 0; i < width; i++) {
        int value = *(ptr + row_id * width + i);
        if (value > *max) {
            *max = value;
        }
        if (value < *min) {
            *min = value;
        }
        sum += value;
    }
    *avg = (float)sum / width;
    return 0;
}
int main() {
    int matrix[5][5];
    int *ptr = &matrix[0][0];
    printf("Podaj liczby:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int res=scanf("%d", (ptr + i * 5 + j));
            if (res != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        int max, min;
        float avg;
        if (column_statistics(ptr, 5, 5, i, &max, &min, &avg) == 0) {
            printf("%d %d %.2f\n", min, max, avg);
        }
    }
    for (int i = 0; i < 5; i++) {
        int max, min;
        float avg;

        if (row_statistics(ptr, 5, 5, i, &max, &min, &avg) == 0) {
            printf("%d %d %.2f\n", min, max, avg);
        }
    }
    return 0;
}
