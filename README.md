# Sekiro-Mod-Manager
Mod Manger for the 2019 Game of The Year; Sekiro - Shadows Die Twice

Currently you can add, remove, install, and uninstall mods. You can also launch sekiro and automatically install modengine(if it isnt installed already).


# Usage

Mods

To install a mod, first add it to the manager by pressing the "plus" button, then press the install button. This will unpack the mod files into the into the mods folder in the sekiro directory(provided modengine is installed). 



Profiles

Profiles are basically a merged mod. Lets say you want to have the Boss Rush mod, and have a cosmetic mod for sekiro you also like. You can make a mod profile which contains both mods.  Just click the "plus" button, specify the name of the profile and how many mods will be included, then choose what mods to add. Another advantage of using profiles is that you dont have to overwrite anything when installing a new one. Just install whatever profiles you plan on frequently using, then choose the profile you want to enable in the combo box and click "set active". This is done by changing the folder modengine uses in modengine.ini.   


This uses 7-Zip Extra(7za.exe) and UnRAR(UnRAR.exe) to unpack and repack mods, so when compiling the source code put 7za.exe(and its required dll files) and unrar.exe in the build directory.


This only supports mods that use modengine compressed in a RAR, Zip, or 7z format. 



7-Zip Extra license

      7-Zip Extra
      ~~~~~~~~~~~
      License for use and distribution
      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

      Copyright (C) 1999-2019 Igor Pavlov.

      7-Zip Extra files are under the GNU LGPL license.

      
      Notes: 
        You can use 7-Zip Extra on any computer, including a computer in a commercial 
        organization. You don't need to register or pay for 7-Zip.


      GNU LGPL information
      --------------------

        This library is free software; you can redistribute it and/or
        modify it under the terms of the GNU Lesser General Public
        License as published by the Free Software Foundation; either
        version 2.1 of the License, or (at your option) any later version.

        This library is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
        Lesser General Public License for more details.

        You can receive a copy of the GNU Lesser General Public License from 
        http://www.gnu.org/



UnRAR Licsense



      ******    *****   ******   UnRAR - free utility for RAR archives
      **   **  **   **  **   **  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      ******   *******  ******    License for use and distribution of
      **   **  **   **  **   **   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      **   **  **   **  **   **         FREEWARE version
                                   ~~~~~~~~~~~~~~~~

      The UnRAR utility is freeware. This means:

      1. All copyrights to RAR and the utility UnRAR are exclusively
      owned by the author - Alexander Roshal.

      2. The UnRAR utility may be freely distributed. It is allowed
      to distribute UnRAR inside of other software packages.

      3. THE RAR ARCHIVER AND THE UnRAR UTILITY ARE DISTRIBUTED "AS IS".
      NO WARRANTY OF ANY KIND IS EXPRESSED OR IMPLIED.  YOU USE AT 
      YOUR OWN RISK. THE AUTHOR WILL NOT BE LIABLE FOR DATA LOSS, 
      DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING
      OR MISUSING THIS SOFTWARE.

      4. Neither RAR binary code, WinRAR binary code, UnRAR source or UnRAR
      binary code may be used or reverse engineered to re-create the RAR
      compression algorithm, which is proprietary, without written
      permission of the author.

      5. If you don't agree with terms of the license you must remove
      UnRAR files from your storage devices and cease to use the
      utility.

      Thank you for your interest in RAR and UnRAR.


                                            Alexander L. Roshal
