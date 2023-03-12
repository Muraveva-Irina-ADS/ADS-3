// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
    int first = 0, end = size-1, curr;
    int count = 0;
    while (first != end) {
        curr = (first + end) / 2;
        if (arr[curr] == value) {
            count++;
            int cur_1 = curr+1;
            int cur_2 = curr-1;
            while (arr[cur_1] == value) {
                count++;
                cur_1++;
            }
            while (arr[cur_2] == value) {
                count++;
                cur_2--;
            }
            first = end;
        }
        else
            if (arr[curr] > value)
                end = curr;
        else
            first = curr+1;
    }
    return count;
}
