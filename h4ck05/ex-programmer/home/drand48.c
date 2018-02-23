uint64_t rand48_state;

void srand48(uint32_t seed) {
  rand48_state = 0x330e + (seed << 16);
}

uint32_t mrand48() {
  rand48_state = (0x00000005deece66d * rand48_state + 11) & 0x0000ffffffffffff;
  return (rand48_state >> 16);
}
