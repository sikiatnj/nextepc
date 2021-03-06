#ifndef __NAS_PATH_H__
#define __NAS_PATH_H__

#include "mme_context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int nas_send_to_enb(mme_ue_t *mme_ue, ogs_pkbuf_t *pkbuf);
int nas_send_emm_to_esm(
    mme_ue_t *mme_ue, nas_esm_message_container_t *esm_message_container);
int nas_send_to_downlink_nas_transport(mme_ue_t *mme_ue, ogs_pkbuf_t *pkbuf);

int nas_send_attach_accept(mme_ue_t *mme_ue);
int nas_send_attach_reject(mme_ue_t *mme_ue,
    nas_emm_cause_t emm_cause, nas_esm_cause_t esm_cause);

int nas_send_identity_request(mme_ue_t *mme_ue);

int nas_send_authentication_request(
        mme_ue_t *mme_ue, e_utran_vector_t *e_utran_vector);
int nas_send_authentication_reject(mme_ue_t *mme_ue);

int nas_send_detach_accept(mme_ue_t *mme_ue);

int nas_send_pdn_connectivity_reject(
    mme_sess_t *sess, nas_esm_cause_t esm_cause);
int nas_send_esm_information_request(mme_bearer_t *bearer);
int nas_send_activate_default_bearer_context_request(
    mme_bearer_t *bearer);
int nas_send_activate_dedicated_bearer_context_request(
    mme_bearer_t *bearer);
int nas_send_activate_all_dedicated_bearers(
    mme_bearer_t *default_bearer);
int nas_send_modify_bearer_context_request(
        mme_bearer_t *bearer, int qos_presence, int tft_presence);
int nas_send_deactivate_bearer_context_request(
    mme_bearer_t *bearer);

int nas_send_tau_accept(
        mme_ue_t *mme_ue, S1AP_ProcedureCode_t procedureCode);
int nas_send_tau_reject(
        mme_ue_t *mme_ue, nas_esm_cause_t emm_cause);

int nas_send_service_reject(
        mme_ue_t *mme_ue, nas_emm_cause_t emm_cause);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __NAS_PATH_H__ */
