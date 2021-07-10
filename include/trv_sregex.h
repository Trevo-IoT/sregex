/**
 * @file trv_sregex.h
 * @author Matheus T. dos Santos (matheus.santos@edge.ufal.br)
 * @brief
 * @version 0.1
 * @date 10-07-2021
 *
 * @copyright Trevo IoT todos os direitos reservados (c) 2021
 *
 */
#ifndef __TRV_SREGEX_H__
#define __TRV_SREGEX_H__

#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include "trv_utils.h"

typedef struct {
    char *pattern;
} trv_sregex_t;

typedef struct {
    size_t start;
    size_t end;
} trv_position_t;

int trv_sregex_init(trv_sregex_t *regex, const char *pattern);

bool trv_sregex_is_match(trv_sregex_t *regex, char *string);

trv_position_t trv_sregex_find(trv_sregex_t *regex, char *string);

#endif  //__TRV_SREGEX_H__
