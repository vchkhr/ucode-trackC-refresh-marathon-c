void mx_sort_arr_int(int *arr, int size) {
    for (int j = 1; j < size; j++) {
        for (int i = 0; i < size - j; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];

                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
