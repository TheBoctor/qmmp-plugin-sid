# qmmp-plugin-sid
A fork for the SID Plugin: A user can now provide their own C64 ROMs for better sound emulation. 

This is for Qt5 only, but the changes are easy to backport and anyone is free to do so. I do not want any kind of credit for this, the original SID plugin is the work of Ilya Kotov. I am completely unaffiliated with qmmp and its authors.

You must download the full qmmp source to build this. Just replace the corresponding files in the qmmp source's "Input/sid" directory, and build the SID plugin with your preferred QMake targets.
Official home page: http://qmmp.ylsoftware.com/
Development: https://sourceforge.net/projects/qmmp-dev/

No dependencies were added or changed. Use `$ qmake -qt=qt5` to build, `$ make`, and `# make install` once you've merged these files with the vanilla SID plugin. It should build and install exactly the same way. The vanilla/old qmmp SID plugin **will be overwritten**, if successful.

These files are provided under the same GPLv2 license as qmmp. I will always use the same license as the last version I forked from.
