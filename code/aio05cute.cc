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
  int d;
 
  FILE* input_file = fopen("cutein.txt", "r");
  fscanf(input_file, "%d", &d);
 
  // AIO problem is a loop writing task 
  int zero;
  int n_zero = 0;
  for (int i = 0; i < d; ++i) {
    fscanf(input_file, "%d", &zero);
    if (!zero) {
      ++n_zero;
    } else {
      n_zero = 0; // reset n_zero
    }  
  }
 
  fclose(input_file);  
 
  FILE* output_file = fopen("cuteout.txt", "w");
  fprintf(output_file, "%d", n_zero);
  fclose(output_file);
}
