/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AddRequest_H_
#define	_AddRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LDAPDN.h"
#include "AttributeList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AddRequest */
typedef struct AddRequest {
	LDAPDN_t	 entry;
	AttributeList_t	 attributes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AddRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AddRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _AddRequest_H_ */
#include <asn_internal.h>