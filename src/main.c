/**
 * @file main.c
 * @author Matheus T. dos Santos (matheus.santos@edge.ufal.br)
 * @brief
 * @version 0.1
 * @date 10-07-2021
 *
 * @copyright Trevo IoT todos os direitos reservados (c) 2021
 *
 */
#include <stdio.h>
#include "trv_sregex.h"

int main(void)
{
    trv_sregex_t regex;
    char *site1 = "https://www.github.com";
    char *site2 = "ftp://www.github.com";

    TRV_ASSERT(trv_sregex_init(&regex, "http|https?"));

    printf("Is '%s' HTTP protocol? %s\n", site1,
           TRV_BOOL2STR(trv_sregex_is_match(&regex, site1)));

    printf("Is '%s' HTTP protocol? %s\n", site2,
           TRV_BOOL2STR(trv_sregex_is_match(&regex, site2)));

    return 0;
}
