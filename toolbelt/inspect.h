//
// Copyright (c) 2020, Fellipe Augusto Ugliara
//
// Use of this source code is governed by an ISC license that can be found
// in the LICENSE file at https://github.com/ugliara-fellipe/library.datatype
//
#ifndef INSPECT_H
#define INSPECT_H

typedef struct {
  char *nodes;
  char *edges;
} inspect_t;

inspect_t *inspect_alloc();
void inspect_dealloc(inspect_t *self);

void inspect_perform(inspect_t *self, const char *file_path_name);

void inspect_value_node(inspect_t *self, void *address, const char *value,
                        const char *type);

void inspect_pair_node(inspect_t *self, void *address, const char *key,
                       void *address_value);

void inspect_array_node(inspect_t *self, void *address, size_t size,
                        const char *type);

void inspect_add_edge(inspect_t *self, void *from_address, const char *from_sub,
                      void *to_address, const char *to_sub);

#endif
