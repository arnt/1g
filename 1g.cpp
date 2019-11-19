// Copyright Arnt Gulbrandsen, arnt@gulbrandsen.priv.no.

#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(int argc, char* argv[])
{
  struct rlimit64 r;
  r.rlim_cur = 60;
  r.rlim_max = 60;
  setrlimit64(RLIMIT_CPU, &r);
  r.rlim_cur = 1024 * 1024 * 1024;
  r.rlim_max = 1024 * 1024 * 1024;
  setrlimit64(RLIMIT_AS, &r);

  ::execvp(argv[1], argv+1);
}
