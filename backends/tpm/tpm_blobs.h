/*
 * Copyright (c) 2020 Oracle and/or its affiliates.
 *
 * This work is licensed under the terms of the GNU GPL, version 2.
 * See the COPYING file in the top-level directory.
 */

#ifndef TPM_BLOBS_H
#define TPM_BLOBS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The constants and data structures described in this file form part
 * of a stable interface between libtpms and QEMU. It is not possible
 * to update one without consideration of the other.
 */

#define TPMLIB_BLOB_MAGIC                   ((uint32_t)0xb10b)
#define TPMLIB_BLOB_PCR_VALUES_VERSION_1    ((TPMLIB_BLOB_MAGIC << 16) | 0x1)

/*
 * PCR Values blob version 1 is encoded as follows:
 *
 * UINT32 version
 * UINT32 count of PCR values
 * [ UINT32 PCR number
 *   UINT32 count of digests
 *   [ UINT16 length of algorithm name (including NULL)
 *     [ BYTE algorithm name bytes
 *     ] x length of algorithm name
 *     UINT32 count of digest bytes
 *     [ BYTE digest byte
 *     ] x count of digest bytes
 *   ] x count of digests
 * ] x count of PCR values
 *
 * There no packing between elements.
 */

#ifdef __cplusplus
}
#endif

#endif /* TPM_BLOBS_H */
