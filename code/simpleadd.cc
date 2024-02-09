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
  int a, b;
 
  FILE* input_file = fopen("addin.txt", "r");
  fscanf(input_file, "%d %d", &a, &b);
  fclose(input_file);
 
  int sum = a + b;	
 
  FILE* output_file = fopen("addout.txt", "w");	
  fprintf(output_file, "%d", sum);
  fclose(output_file);
} 