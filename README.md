## VS Code + clangd interaction with CMake's precompiled headers
A repository showcasing a bug/weird behaviour in VS Code when using CMake, precompiled headers and the clangd extension.

When running `clang-tidy` it correctly finds the two possible improvements in the code (namely the missing `const` on `A::GetInt` and the `for` loop).

However, it also emits an error saying `Use of undeclared identifier 'say' (undeclared_var_use)` indicating it does not see the `hello.hpp` file as an include, even though `compile_commands.json` contain this:

```json
{
  "directory": "/<path-to-code>/precompiled-clangd-vscode/build",
  "command": "/usr/bin/x86_64-linux-gnu-g++-10    -g   -Winvalid-pch -include /<path-to-code>/precompiled-clangd-vscode/CMakeFiles/hello-world.dir/cmake_pch.hxx -o CMakeFiles/hello-world.dir/main.cpp.o -c /<path-to-code>/precompiled-clangd-vscode/main.cpp",
  "file": "/<path-to-code>/precompiled-clangd-vscode/main.cpp"
}
```

![image](https://user-images.githubusercontent.com/10940329/132301683-b7287585-c471-44b5-9a99-386d6faf926f.png)

