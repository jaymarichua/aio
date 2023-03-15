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
  int N, K;
 
  FILE* input_file = fopen("ninjain.txt", "r");
  fscanf(input_file, "%d %d", &N, &K);
  fclose(input_file);
 
  // AIO problem can be reframed as a division problem
  int ninjas = N;
  int ninjas_sneak = K;
  int ninjas_each_round = K + 1;
  int remainder = ninjas % ninjas_each_round;
 
  int ninjas_sneak_total;
  if (remainder) {
    ninjas_sneak_total = K * (ninjas / ninjas_each_round) + remainder - 1;
  } else {
    ninjas_sneak_total = K * (ninjas / ninjas_each_round);
  }
 
  FILE* output_file = fopen("ninjaout.txt", "w");
  fprintf(output_file, "%d", ninjas_sneak_total); 
  fclose(output_file);
}
