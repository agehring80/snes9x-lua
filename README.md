# Snes9x-Lua
*Snes9x-Lua - Portable Super Nintendo Entertainment System (TM) emulator* with Lua Support

This version is based on the official source code repository of the [Snes9x project](https://github.com/snes9xgit).

A big thank you to everyone involved in the development of Snes9x. Please check the [Wiki](https://github.com/snes9xgit/snes9x/wiki) for additional information.

Special thanks also go to [gocha](https://tasvideos.org/Users/Profile/gocha), a TAS expert and author of [snes9x-rr](https://github.com/gocha/snes9x-rr) and other great tools like the IDA SNES module loader.
This Lua version reuses gocha's code, ported to Snes9x version 1.63, with some usability enhancements. It is not intended for TASing.

The reason for this project: I love Lemmings and SimCity (SNES versions), but I needed mouse support 😊. Thanks to Lua, I was able to add it.

## Info
This release is focused to create only Windows lua builds. 

And they run fine with wine.

## Compiling
-   Visual Studio and the Windows SDK is needed.
-   DirectX SDK (DXSDK_Jun10.exe) is needed.

```
# 1. Clone the Repo
git clone https://github.com/agehring80/snes9x-lua

# 2. Submodule load / update
cd snes9x-lua
git submodule update --init --recursive

# 3. check TARGET_WINDOWS_VERSION &
#    TARGET_TOOLSET in setWinSDK.py
#    and set it in all VS Projects
#    with this python helper script.
cd win32
python setWinSDK.py
```

Open Visual Studio, click build and hope for the best.