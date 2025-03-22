#include <stdio.h>

// Function to count the number of 1s in the binary representation
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to print the binary representation of a number in 32 bits
void printBinary(int num) {
    for (int i = 31; i >= 0; --i) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" ");  // Add space for better readability
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    for (int testCase = 1; testCase <= n; ++testCase) {
        int queryNumber, m;
        scanf("%d %d", &queryNumber, &m);

        printf("Case %d:\n", testCase);

        int minDiff = 1e9, maxDiff = -1e9;
        int minDiffNumber, maxDiffNumber;

        // Process candidate numbers
        for (int i = 0; i < m; ++i) {
            int candidate;
            scanf("%d", &candidate);

            int onesCount = countOnes(candidate);
            int diff = onesCount - countOnes(queryNumber);

            // Update min difference number
            if (diff < minDiff || (diff == minDiff && candidate < minDiffNumber)) {
                minDiff = diff;
                minDiffNumber = candidate;
            }

            // Update max difference number
            if (diff > maxDiff || (diff == maxDiff && candidate > maxDiffNumber)) {
                maxDiff = diff;
                maxDiffNumber = candidate;
            }

            // Print binary representation
            printBinary(candidate);
        }

        // Print binary representation of the query number
        printBinary(queryNumber);

        // Print the desired numbers
        printf("Min Diff: %d\n", minDiffNumber);
        printf("Max Diff: %d\n", maxDiffNumber);
    }

    return 0;
}
