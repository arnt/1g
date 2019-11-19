This is an extremely small C program I use all the time when I run tests
and things like that. It runs its argument and tells the kernel to grant
it at most 1G RAM. Usage:

    1g ./foo-build/this/that -l -v -g

1g (which takes no options) runs "that -l -v g", and if that's buggy and
tries to allocate the whole world, then the kernel will kill it. No mercy
for broken tests.
