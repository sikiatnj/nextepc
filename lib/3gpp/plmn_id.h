#ifndef __PLMN_ID_H__
#define __PLMN_ID_H__

#include "core_errno.h"

#define PLMN_ID_LEN 3

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct _plmn_id_t {
    c_uint16_t      mcc;
    c_uint16_t      mnc;
    c_uint16_t      mnc_len;
} plmn_id_t;

CORE_DECLARE(void *) plmn_id_to_buffer(plmn_id_t *plmn_id, c_uint8_t *buf);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* !__PLMN_ID_H__ */