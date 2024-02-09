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
#include <cmath> 
 
int main() {
  int N;
  char c;
 
  FILE* input_file = fopen("telein.txt", "r");
  fscanf(input_file, "%d", &N);
 
  int position = 0;
  int n_max_left = 0, n_max_right = 0;
  for (int i = 0; i < N; ++i) {
    fscanf(input_file, " %c", &c);
    if (c == 'L') {
      position -= 1;
      if (position < n_max_left) {
        n_max_left = position;
      }
    } else if (c == 'R') {
      position += 1;
      if (position > n_max_right) {
        n_max_right = position;
      }
    } else if (c == 'T'){
      position = 0;
    } else {
      break;
    }
  }
  int n_farmhouses = - n_max_left + n_max_right + 1;
 
  FILE* output_file = fopen("teleout.txt", "w");	
  fprintf(output_file, "%d", n_farmhouses);
 
  fclose(input_file);
  fclose(output_file);
}