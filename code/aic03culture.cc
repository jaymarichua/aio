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
  int n;
 
  FILE* input_file = fopen("cultin.txt", "r");
  fscanf(input_file, "%d", &n);
  fclose(input_file);  
 
  // AIO problem is a loop writing task 
  int d = 0;
  while (!(n % 2)) {
    n /= 2;
    ++d;
  }
  int b = n;
 
  FILE* output_file = fopen("cultout.txt", "w");
  fprintf(output_file, "%d %d", b, d);
  fclose(output_file);
}
