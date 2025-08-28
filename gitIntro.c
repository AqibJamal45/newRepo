int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += numbers[i];
    }
    printf("The sum of the array elements is: %d\n", totalSum);
}