/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-crt/model/ChecksumAlgorithm.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {
namespace ChecksumAlgorithmMapper {

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

ChecksumAlgorithm GetChecksumAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRC32_HASH) {
    return ChecksumAlgorithm::CRC32;
  } else if (hashCode == CRC32C_HASH) {
    return ChecksumAlgorithm::CRC32C;
  } else if (hashCode == SHA1_HASH) {
    return ChecksumAlgorithm::SHA1;
  } else if (hashCode == SHA256_HASH) {
    return ChecksumAlgorithm::SHA256;
  } else if (hashCode == CRC64NVME_HASH) {
    return ChecksumAlgorithm::CRC64NVME;
  } else if (hashCode == SHA512_HASH) {
    return ChecksumAlgorithm::SHA512;
  } else if (hashCode == MD5_HASH) {
    return ChecksumAlgorithm::MD5;
  } else if (hashCode == XXHASH64_HASH) {
    return ChecksumAlgorithm::XXHASH64;
  } else if (hashCode == XXHASH3_HASH) {
    return ChecksumAlgorithm::XXHASH3;
  } else if (hashCode == XXHASH128_HASH) {
    return ChecksumAlgorithm::XXHASH128;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChecksumAlgorithm>(hashCode);
  }

  return ChecksumAlgorithm::NOT_SET;
}

Aws::String GetNameForChecksumAlgorithm(ChecksumAlgorithm enumValue) {
  switch (enumValue) {
    case ChecksumAlgorithm::NOT_SET:
      return {};
    case ChecksumAlgorithm::CRC32:
      return "CRC32";
    case ChecksumAlgorithm::CRC32C:
      return "CRC32C";
    case ChecksumAlgorithm::SHA1:
      return "SHA1";
    case ChecksumAlgorithm::SHA256:
      return "SHA256";
    case ChecksumAlgorithm::CRC64NVME:
      return "CRC64NVME";
    case ChecksumAlgorithm::SHA512:
      return "SHA512";
    case ChecksumAlgorithm::MD5:
      return "MD5";
    case ChecksumAlgorithm::XXHASH64:
      return "XXHASH64";
    case ChecksumAlgorithm::XXHASH3:
      return "XXHASH3";
    case ChecksumAlgorithm::XXHASH128:
      return "XXHASH128";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChecksumAlgorithmMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
