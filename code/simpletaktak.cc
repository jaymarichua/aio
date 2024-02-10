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
  int n_fruit;
 
  FILE* input_file = fopen("taktakin.txt", "r");
  fscanf(input_file, "%d", &n_fruit);
  fclose(input_file); 
 
  // N fruit is doubled every full moon until harvest.
  // Harvest is determined by divisibility by 11 with 1 remaining.
  int n_moon = 0;
  while (n_fruit % 11 != 1) {
    ++n_moon;  
    n_fruit *= 2;
  }
  
  FILE* output_file = fopen("taktakout.txt", "w");
  fprintf(output_file, "%d %d", n_moon, n_fruit);
  fclose(output_file); 
}