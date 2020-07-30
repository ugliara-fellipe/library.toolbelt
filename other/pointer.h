//
// Copyright (c) 2020, Fellipe Augusto Ugliara
//
// Use of this source code is governed by an ISC license that can be found
// in the LICENSE file at https://github.com/ugliara-fellipe/library.datatype
//
#ifndef POINTER_H
#define POINTER_H

#include "prototype.h"

typedef struct {
  object_t value;
} pointer_t;

def_prototype_header(pointer_t);

void pointer_test();

object_t pointer_get(pointer_t *self);
void pointer_set(pointer_t *self, object_t object);

#endif
