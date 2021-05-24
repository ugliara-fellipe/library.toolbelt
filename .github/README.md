# Toolbelt

Toolbelt is a library designed to extend the C11 standard library. The goal is 
to improve the support for the development in C. The project modules redefine 
the C types and create types like list, pair, prototype. This project depends 
only on the C11 standard library.

## Build and Format

Use the Advanced Package Tool [apt](https://en.wikipedia.org/wiki/APT_\(software\)) 
to install the dependencies necessary to build and format the project. The compiler 
[clang](https://en.wikipedia.org/wiki/Clang) is used to compile the project, and the 
source codes are formated using [clang-format](http://clang.llvm.org/docs/ClangFormat.html).
Run the next command in Linux (Debian like distros) to install the dependencies.

```bash
sudo apt install clang clang-format
```

Use the script *build.sh* to compile the project and to generate the deploy folder 
with headers files and static library objects files. Run the next command to build 
the project.

```bash
sh build.sh
```

The *format.sh* script applies the code style to the header (.h) and source (.c) 
files in the project. Run the next command to format the project.

```bash
sh format.sh
```

## Usage

The best way to begin the use of **toolbelt** library is by studying the test 
functions called in the *test.c* file. You will find examples of how to use the 
major library features. For further assistance, contact me by email 
(<ugliara.fellipe@gmail.com>). 

## Contributing

Pull requests are welcome. Please open an issue first to discuss what you 
would like to change. Read 
[CONTRIBUTING.md](https://github.com/ugliara-fellipe/library.toolbelt/blob/master/.github/CONTRIBUTING.md) 
for details on our code of conduct, and the process for submitting pull requests.

## Copyright and License

Copyright 2020 Fellipe Augusto Ugliara

Use of source codes are governed by an ISC license that can be found 
in the LICENSE file at https://github.com/ugliara-fellipe/library.toolbelt
