# CMake Build


## build on Windows

需要已有cmake发行二进制工具MSVC环境

执行编译

```bash
> mkdir build & cd build
> cmake .. -G Ninja
> ninja
>
> mkdir build & cd build
> cmake .. -G Ninja
> devenv  CMake.sln /Build
```

## build on Debian

