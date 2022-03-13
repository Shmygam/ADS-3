// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  uint64_t low = 0, up = (size - 1), count = 0;

    while (low < up) {
        uint64_t key = (low + up) / 2;
        if (arr[key] == value) {

            uint64_t temp = key;

            while (arr[key -= 1] == value) {
                count += 1;
            }
            while (arr[temp += 1] == value) {
                count += 1;
            }

            return count + 1;
        }

        else if (arr[key] > value) {
            up = key;
        }
        else {
            low = key + 1;
        }
    }
    return false;
}
