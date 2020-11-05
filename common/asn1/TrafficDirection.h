/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#ifndef	_TrafficDirection_H_
#define	_TrafficDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficDirection {
	TrafficDirection_allTrafficDirections	= 0,
	TrafficDirection_startToEndDirection	= 1,
	TrafficDirection_endToStartDirection	= 2
} e_TrafficDirection;

/* TrafficDirection */
typedef long	 TrafficDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficDirection;
asn_struct_free_f TrafficDirection_free;
asn_struct_print_f TrafficDirection_print;
asn_constr_check_f TrafficDirection_constraint;
ber_type_decoder_f TrafficDirection_decode_ber;
der_type_encoder_f TrafficDirection_encode_der;
xer_type_decoder_f TrafficDirection_decode_xer;
xer_type_encoder_f TrafficDirection_encode_xer;
per_type_decoder_f TrafficDirection_decode_uper;
per_type_encoder_f TrafficDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficDirection_H_ */
#include <asn_internal.h>
