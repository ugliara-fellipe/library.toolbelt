//
// Copyright (c) 2020, Fellipe Augusto Ugliara
//
// Use of this source code is governed by an ISC license that can be found
// in the LICENSE file at https://github.com/ugliara-fellipe/library.datatype
//
#ifndef CRASH_H
#define CRASH_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define __ONLY_FILE_NAME__                                                     \
  (strrchr(__FILE__, '/')                                                      \
       ? strrchr(__FILE__, '/') + 1                                            \
       : (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__))

void *crash_and_exit(const char *format, ...);

#define crash(format, ...)                                                     \
  crash_and_exit("%s: %d: crash: " format "\n", __ONLY_FILE_NAME__, __LINE__,  \
                 ##__VA_ARGS__)

#endif