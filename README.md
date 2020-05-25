# qmmp-plugin-sid
A slight modificiation for the SID Plugin: A user can now provide their own C64 ROMs for better sound emulation.

This is essential on distros like Debian, where the Commodore 64 ROMs are not compiled into libsidplayfp because of copyright.

I do not want credit for these changes, the original SID plugin is the work of Ilya Kotov. I am unaffiliated with qmmp. This repo is for Qt5 qmmp (1.3.0+) only. However, the changes are simple to backport.

Qmmp project home page: http://qmmp.ylsoftware.com/

You must download the full qmmp source to build this. Just replace the same-named files in the qmmp source's "Input/sid" directory, and build the SID plugin with your preferred QMake targets.

Dependencies are unchanged from qmmp's. Use `$ qmake -qt=qt5` to build, `$ make`, and then `# make install` once you've merged these files with the main qmmp source code. It should build and install exactly the same way, overwriting the old sid plugin.

# Disclaimer
**These files are provided under the same license as qmmp, the GNU Public License, Version 2. I will always preserve the license of the qmmp version I forked from. The original credits for every file are intact, I have not credited myself. All of these files, except for the GPLv2 license, have been changed from their original versions. Nothing here is provided with any warranties. For more information, read COPYING.**
