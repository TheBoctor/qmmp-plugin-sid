# qmmp-plugin-sid
A slight modificiation for the SID Plugin: A user can now provide their own C64 ROMs for better sound emulation. 

I do not desire any kind of credit for these slight changes, the original SID plugin is the work of Ilya Kotov. I am completely unaffiliated with qmmp and its authors. This is for Qt5 qmmp (1.3.0+) only, however, the changes are easy to backport and anyone is free to do so. Prior to this release, I did use these changes on an older version without issue.

Qmmp project home page: http://qmmp.ylsoftware.com/

You must download the full qmmp source to build this. Just replace the same-named files in the qmmp source's "Input/sid" directory, and build the SID plugin with your preferred QMake targets.

Dependencies are unchanged. Use `$ qmake -qt=qt5` to build, `$ make`, and then `# make install` once you've merged these files with the vanilla libsid source code. It should build and install exactly the same, and the existing libsid.so plugin will be overwritten, if present.

# Disclaimer
**These files are provided under the same license as qmmp, the GNU Public License, Version 2. I will always preserve the license of the qmmp version I forked from.
The original credits for every file are intact, I have not credited myself. All of these files, except for the GPLv2 license, have been changed from their original versions. Nothing here is provided with any warranties. For more information, read COPYING.**
