/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#include "AlacarteContainer.h"

static asn_TYPE_member_t asn_MBR_AlacarteContainer_1[] = {
	{ ATF_POINTER, 7, offsetof(struct AlacarteContainer, lanePosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LanePosition,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lanePosition"
		},
	{ ATF_POINTER, 6, offsetof(struct AlacarteContainer, impactReduction),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ImpactReductionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"impactReduction"
		},
	{ ATF_POINTER, 5, offsetof(struct AlacarteContainer, externalTemperature),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Temperature,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"externalTemperature"
		},
	{ ATF_POINTER, 4, offsetof(struct AlacarteContainer, roadWorks),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadWorksContainerExtended,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"roadWorks"
		},
	{ ATF_POINTER, 3, offsetof(struct AlacarteContainer, positioningSolution),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningSolutionType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positioningSolution"
		},
	{ ATF_POINTER, 2, offsetof(struct AlacarteContainer, stationaryVehicle),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StationaryVehicleContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stationaryVehicle"
		},
	{ ATF_POINTER, 1, offsetof(struct AlacarteContainer, speedLimit),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedLimitContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedLimit"
		},
};
static int asn_MAP_AlacarteContainer_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_AlacarteContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AlacarteContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lanePosition at 109 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* impactReduction at 110 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* externalTemperature at 111 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* roadWorks at 112 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* positioningSolution at 113 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* stationaryVehicle at 114 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* speedLimit at 115 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AlacarteContainer_specs_1 = {
	sizeof(struct AlacarteContainer),
	offsetof(struct AlacarteContainer, _asn_ctx),
	asn_MAP_AlacarteContainer_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_AlacarteContainer_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AlacarteContainer = {
	"AlacarteContainer",
	"AlacarteContainer",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AlacarteContainer_tags_1,
	sizeof(asn_DEF_AlacarteContainer_tags_1)
		/sizeof(asn_DEF_AlacarteContainer_tags_1[0]), /* 1 */
	asn_DEF_AlacarteContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_AlacarteContainer_tags_1)
		/sizeof(asn_DEF_AlacarteContainer_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AlacarteContainer_1,
	7,	/* Elements count */
	&asn_SPC_AlacarteContainer_specs_1	/* Additional specs */
};

