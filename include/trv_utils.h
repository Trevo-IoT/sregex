/**
 * @file trv_utils.h
 * @author Matheus T. dos Santos (matheus.santos@edge.ufal.br)
 * @brief
 * @version 0.1
 * @date 10-07-2021
 *
 * @copyright Trevo IoT todos os direitos reservados (c) 2021
 *
 */
#ifndef __TRV_UTILS_H__
#define __TRV_UTILS_H__

#define TRV_ASSERT(x)                                                      \
    do {                                                                   \
        int err = x;                                                       \
        if (x) {                                                           \
            printf("Error at %s:%d -> %d\n", __FUNCTION__, __LINE__, err); \
        }                                                                  \
    } while (0)

#define TRV_BOOL2STR(b) ((b) ? "true" : "false")

#endif  //__TRV_UTILS_H__
