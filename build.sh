#
# Copyright (c) 2020, Fellipe Augusto Ugliara
#
# Use of this source code is governed by an ISC license that can be found 
# in the LICENSE file at https://github.com/ugliara-fellipe/library.datatype
#
# --------------------
#
# Run this script to deploy datatype library and tests
# It require clang; to install use the command:
#
#   $ sudo apt install clang
#
rm -rf ./deploy
mkdir deploy
mkdir deploy/object
mkdir deploy/include
mkdir deploy/include/abstract
mkdir deploy/include/composite
mkdir deploy/include/other
mkdir deploy/include/primitive
mkdir deploy/include/toolbelt

clang toolbelt/crash.c -c -o deploy/object/crash.o
clang toolbelt/inspect.c -c -o deploy/object/inspect.o

clang composite/prototype.c -c -I toolbelt -o deploy/object/prototype.o
clang composite/text.c -c -I composite -I toolbelt -o deploy/object/text.o
clang composite/pair.c -c -I composite -I toolbelt -o deploy/object/pair.o

clang other/function.c -c -I composite -I toolbelt -o deploy/object/function.o
clang other/pointer.c -I composite -I primitive -I toolbelt -c -o deploy/object/pointer.o

clang primitive/logic.c -c -I composite -I toolbelt -o deploy/object/logic.o
clang primitive/nil.c -c -I composite -I toolbelt -o deploy/object/nil.o
clang primitive/number.c -I composite -I toolbelt -c -o deploy/object/number.o

clang abstract/list.c -c -I composite -I primitive -I toolbelt -o deploy/object/list.o
clang abstract/table.c -c -I composite -I toolbelt -o deploy/object/table.o
clang abstract/graph.c -c -I composite -I toolbelt -o deploy/object/graph.o

clang test.c deploy/object/*.o -I abstract -I composite -I other -I primitive -I toolbelt -o deploy/test

cp abstract/*.h deploy/include/abstract/
cp composite/*.h deploy/include/composite/
cp other/*.h deploy/include/other/
cp primitive/*.h deploy/include/primitive/
cp toolbelt/*.h deploy/include/toolbelt/
