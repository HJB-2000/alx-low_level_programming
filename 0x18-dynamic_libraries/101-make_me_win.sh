#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n\nint rand(void) { return 6; }\nint rand_r(unsigned int *seed) { return 6; }' > /tmp/libc.so
LD_PRELOAD=/tmp/libc.so ./gm 9 8 10 24 75 9
