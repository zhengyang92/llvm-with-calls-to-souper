/* */
#include <sched.h>

int main(int argc, char** argv)
{
  (void)argv;
#ifndef sched_getaffinity
  return ((int*)(&sched_getaffinity))[argc];
#else
  (void)argc;
  return 0;
#endif
}

