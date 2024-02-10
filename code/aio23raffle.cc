// Copyright 2024 Jaymari Chua
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * Solution Template for Distincto's Raffle
 * 
 * Australian Informatics Olympiad 2023
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

/* N is the number of competitors. */
int N;

/* Competitors all submit a number between 1 and K inclusive. */
int K;

/* numbers contains the submitted numbers. */
int numbers[100005];

int answer;
int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("rafflein.txt", "r");
    FILE *output_file = fopen("raffleout.txt", "w");

    /* Read the values of N, K and the submitted numbers from the input file. */
    fscanf(input_file, "%d%d", &N, &K);
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &numbers[i]);
    }

    /* AIO problem task to use for loop within a for loop */
    

    /* Build the distinct numbers array */
    int distinct_numbers[100005];
    int distinct_numbers_i = 0;

    /* As each submitted number is between 1 and K inclusive. */
    for (int i = 1; i <= K; i++) {
        
        /* Count the number of times a number from 1 to K appears */
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (numbers[j] == i) {
                count++;
            }
        }

        /* Append numbers[i] into the distinct array if distinct */
        if (count == 1) {
            distinct_numbers[distinct_numbers_i] = i;
            distinct_numbers_i++;
        }
    }

    /* Find the min in the distinct numbers array */
    if (distinct_numbers_i == 0) {
        answer = -1;
    } else {
        answer = distinct_numbers[0];
        for (int i = 0; i < distinct_numbers_i; i++) {
            if (distinct_numbers[i] < answer) {
                answer = distinct_numbers[i];
            }
        }
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}