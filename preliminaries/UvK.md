A kernel is all about access to resources, whether the resource in question happens to be a
video card, a hard drive or even memory. Programs often compete for the same resource. As I
just saved this document, updatedb started updating the locate database. My vim session and
updatedb are both using the hard drive concurrently. The kernel needs to keep things
orderly, and not give users access to resources whenever they feel like it. To this end, a
CPU can run in different modes. Each mode gives a different level of freedom to do what you
want on the system. The Intel 80386 architecture has 4 of these modes, which are called
rings. Unix uses only two rings; the highest ring (ring 0, also known as `supervisor mode'
where everything is allowed to happen) and the lowest ring, which is called `user mode'.

