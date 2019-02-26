# qmmp-plugin-sid
A fork for the SID Plugin: A user can now provide their own C64 ROMs for better sound emulation. I am completely unaffiliated with qmmp and its authors.

You cannot build these files without the full qmmp source. To build, replace the corresponding files in the qmmp source (Input/sid) and build the SID plugin (or whole media player, or whatever QMake targets you prefer.)
Official home page: http://qmmp.ylsoftware.com/
Development: https://sourceforge.net/projects/qmmp-dev/

No dependencies were added or changed. Use `$ qmake -qt=qt5` to build, `$ make`, and `# make install` once you've merged these files with the vanilla SID plugin. It should build and install exactly the same way.

These files are provided under the same GPLv2 license as qmmp. I will always use the same license as the version I forked.
