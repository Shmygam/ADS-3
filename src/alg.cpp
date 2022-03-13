// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int low = 0, up = (size - 1), count = 0;

    while (low < up) {
        int key = (low + up) / 2;
        if (arr[key] == value) {
            int temp = key;

            while (arr[key -= 1] == value) {
                count += 1;
            }
            while (arr[temp += 1] == value) {
                count += 1;
            }

            return count + 1;
        } else if (arr[key] > value) {
            up = key;
        } else {
            low = key + 1;
        }
    }
    return false;
}
