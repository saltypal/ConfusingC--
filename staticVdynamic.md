# Static and Dynamic
A static library is a collection of object files whose code is copied into the executable at link time.

Windows → .lib
Linux → .a

.cpp → .o → .lib/.a → .exe (contains everything)

static is when you need an executable that simply runs
its mainly in plugin systems


---

Dynamic is also called shared

A dynamic library is loaded at runtime, and the executable only stores references to it.

Windows → .dll
Linux → .so

.cpp → .o → .dll/.so
           ↓
         .exe (references only)


dynamic is used when many programs share same code and its like "plug in "


--- 
# Making Executor into a DLL

we have to add
```
#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif
```


This code is a preprocessor macro used to make C or C++ code cross-platform. It defines how functions and classes are "exported" so they can be used by other programs


On Windows (_WIN32): It defines DLL_EXPORT as __declspec(dllexport). This tells the Microsoft compiler to add the function to the DLL’s "export table" so external programs can find and call it.


On Other Systems (Linux/macOS): It defines DLL_EXPORT as nothing (an empty macro). Most other operating systems export all functions by default, so special keywords like __declspec aren't needed
```
PS D:\Bunker\BaseCamp\ConfusingC++> cd .\src\
PS D:\Bunker\BaseCamp\ConfusingC++\src> g++ -shared -o executor.dll  .\executor.cpp .\dispatcher.cpp .\commands.cpp

```