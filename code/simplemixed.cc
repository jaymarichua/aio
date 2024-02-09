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
  int n, d;
 
  FILE* input_file = fopen("mixin.txt", "r");
  fscanf(input_file, "%d %d", &n, &d);
  fclose(input_file);
  
  int r = n % d;	
  int dividend = n / d;

  FILE* output_file = fopen("mixout.txt", "w");

  if (r) {
    fprintf(output_file, "%d %d/%d", dividend, r, d);
  } else {
    fprintf(output_file, "%d", dividend);
  }

  fclose(output_file);
}