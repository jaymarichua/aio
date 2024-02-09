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
  int r, s;
  int t;
  int seating_capacity;
  int sitting, standing;
 
  FILE* input_file = fopen("sitin.txt", "r");
  fscanf(input_file, "%d %d", &r, &s);
  fscanf(input_file, "%d", &t);
  fclose(input_file);

  seating_capacity = r * s;

  if (t > seating_capacity) {
    sitting = seating_capacity;
    standing = t - seating_capacity;
  } else {
    sitting = t;
    standing = 0;
  }

  FILE* output_file = fopen("sitout.txt", "w");	
  fprintf(output_file, "%d %d", sitting, standing);
  fclose(output_file);
}