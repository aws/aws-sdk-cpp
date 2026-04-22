/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/model/S3ChecksumAlgorithm.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {
namespace S3ChecksumAlgorithmMapper {

static const int CRC32_HASH = HashingUtils::HashString("CRC32");
static const int CRC32C_HASH = HashingUtils::HashString("CRC32C");
static const int SHA1_HASH = HashingUtils::HashString("SHA1");
static const int SHA256_HASH = HashingUtils::HashString("SHA256");
static const int CRC64NVME_HASH = HashingUtils::HashString("CRC64NVME");
static const int SHA512_HASH = HashingUtils::HashString("SHA512");
static const int MD5_HASH = HashingUtils::HashString("MD5");
static const int XXHASH64_HASH = HashingUtils::HashString("XXHASH64");
static const int XXHASH3_HASH = HashingUtils::HashString("XXHASH3");
static const int XXHASH128_HASH = HashingUtils::HashString("XXHASH128");

S3ChecksumAlgorithm GetS3ChecksumAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRC32_HASH) {
    return S3ChecksumAlgorithm::CRC32;
  } else if (hashCode == CRC32C_HASH) {
    return S3ChecksumAlgorithm::CRC32C;
  } else if (hashCode == SHA1_HASH) {
    return S3ChecksumAlgorithm::SHA1;
  } else if (hashCode == SHA256_HASH) {
    return S3ChecksumAlgorithm::SHA256;
  } else if (hashCode == CRC64NVME_HASH) {
    return S3ChecksumAlgorithm::CRC64NVME;
  } else if (hashCode == SHA512_HASH) {
    return S3ChecksumAlgorithm::SHA512;
  } else if (hashCode == MD5_HASH) {
    return S3ChecksumAlgorithm::MD5;
  } else if (hashCode == XXHASH64_HASH) {
    return S3ChecksumAlgorithm::XXHASH64;
  } else if (hashCode == XXHASH3_HASH) {
    return S3ChecksumAlgorithm::XXHASH3;
  } else if (hashCode == XXHASH128_HASH) {
    return S3ChecksumAlgorithm::XXHASH128;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3ChecksumAlgorithm>(hashCode);
  }

  return S3ChecksumAlgorithm::NOT_SET;
}

Aws::String GetNameForS3ChecksumAlgorithm(S3ChecksumAlgorithm enumValue) {
  switch (enumValue) {
    case S3ChecksumAlgorithm::NOT_SET:
      return {};
    case S3ChecksumAlgorithm::CRC32:
      return "CRC32";
    case S3ChecksumAlgorithm::CRC32C:
      return "CRC32C";
    case S3ChecksumAlgorithm::SHA1:
      return "SHA1";
    case S3ChecksumAlgorithm::SHA256:
      return "SHA256";
    case S3ChecksumAlgorithm::CRC64NVME:
      return "CRC64NVME";
    case S3ChecksumAlgorithm::SHA512:
      return "SHA512";
    case S3ChecksumAlgorithm::MD5:
      return "MD5";
    case S3ChecksumAlgorithm::XXHASH64:
      return "XXHASH64";
    case S3ChecksumAlgorithm::XXHASH3:
      return "XXHASH3";
    case S3ChecksumAlgorithm::XXHASH128:
      return "XXHASH128";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3ChecksumAlgorithmMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
