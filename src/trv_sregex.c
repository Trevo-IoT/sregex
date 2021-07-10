/**
 * @file trv_sregex.c
 * @author Matheus T. dos Santos (matheus.santos@edge.ufal.br)
 * @brief
 * @version 0.1
 * @date 10-07-2021
 *
 * @copyright Trevo IoT todos os direitos reservados (c) 2021
 *
 */
#include "trv_sregex.h"

int trv_sregex_init(trv_sregex_t *regex, const char *pattern)
{
    if (regex == NULL || pattern == NULL) {
        return -ENODEV;
    }

    regex->pattern = (char *) pattern;

    return 0;
}

bool trv_sregex_is_match(trv_sregex_t *regex, char *string)
{
    if (regex == NULL) {
        return false;
    }

    return false;
}

trv_position_t trv_sregex_find(trv_sregex_t *regex, char *string)
{
    trv_position_t pos = {0};

    if (regex == NULL) {
        return pos;
    }

    return pos;
}
