// Copyright 2022 Jaymari Chua
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
 
#include <cstdio>
 
int main() {
  int d, w;
 
  FILE* input_file = fopen("dictin.txt", "r");
  fscanf(input_file, "%d %d", &d, &w);
  
  // AIO problem is an array writing task 
  int x[1000], y[1000];
  int x_i, y_i;
  for (int i = 0; i < d; ++i) {
    fscanf(input_file, "%d %d", &x_i, &y_i);
    x[i] = x_i;
    y[i] = y_i;
  }
  
  FILE* output_file = fopen("dictout.txt", "w");
 
  int x_prompt;
  for (int j = 0; j < w; ++j) {
    fscanf(input_file, "%d", &x_prompt);
    
    // Search for a key value match from index 0 to n
    int found = 0;
    for (int k = 0; k < d; ++k) {
      if (x[k] == x_prompt) {
        fprintf(output_file, "%d\n", y[k]);
        found = 1;
      }
    }
    if (!found) fprintf(output_file, "C?\n");
  } 
 
  fclose(input_file);  
  fclose(output_file);
}
