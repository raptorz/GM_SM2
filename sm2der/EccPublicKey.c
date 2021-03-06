/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Sm2derSimplfied"
 * 	found in "module.asn1"
 */

#include <asn_internal.h>

#include "EccPublicKey.h"

static asn_TYPE_member_t asn_MBR_objIds_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_ObjID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_objIds_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_objIds_specs_2 = {
	sizeof(struct objIds),
	offsetof(struct objIds, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_objIds_2 = {
	"objIds",
	"objIds",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_objIds_tags_2,
	sizeof(asn_DEF_objIds_tags_2)
		/sizeof(asn_DEF_objIds_tags_2[0]), /* 1 */
	asn_DEF_objIds_tags_2,	/* Same as above */
	sizeof(asn_DEF_objIds_tags_2)
		/sizeof(asn_DEF_objIds_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_objIds_2,
	1,	/* Single element */
	&asn_SPC_objIds_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EccPublicKey_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EccPublicKey, objIds),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_objIds_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objIds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EccPublicKey, eccPublicKey),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eccPublicKey"
		},
};
static ber_tlv_tag_t asn_DEF_EccPublicKey_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EccPublicKey_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* eccPublicKey at 45 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* objIds at 43 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EccPublicKey_specs_1 = {
	sizeof(struct EccPublicKey),
	offsetof(struct EccPublicKey, _asn_ctx),
	asn_MAP_EccPublicKey_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EccPublicKey = {
	"EccPublicKey",
	"EccPublicKey",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EccPublicKey_tags_1,
	sizeof(asn_DEF_EccPublicKey_tags_1)
		/sizeof(asn_DEF_EccPublicKey_tags_1[0]), /* 1 */
	asn_DEF_EccPublicKey_tags_1,	/* Same as above */
	sizeof(asn_DEF_EccPublicKey_tags_1)
		/sizeof(asn_DEF_EccPublicKey_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EccPublicKey_1,
	2,	/* Elements count */
	&asn_SPC_EccPublicKey_specs_1	/* Additional specs */
};

