/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds/model/StorageEncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {
namespace StorageEncryptionTypeMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int sse_kms_HASH = HashingUtils::HashString("sse-kms");
static const int sse_rds_HASH = HashingUtils::HashString("sse-rds");

StorageEncryptionType GetStorageEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return StorageEncryptionType::none;
  } else if (hashCode == sse_kms_HASH) {
    return StorageEncryptionType::sse_kms;
  } else if (hashCode == sse_rds_HASH) {
    return StorageEncryptionType::sse_rds;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageEncryptionType>(hashCode);
  }

  return StorageEncryptionType::NOT_SET;
}

Aws::String GetNameForStorageEncryptionType(StorageEncryptionType enumValue) {
  switch (enumValue) {
    case StorageEncryptionType::NOT_SET:
      return {};
    case StorageEncryptionType::none:
      return "none";
    case StorageEncryptionType::sse_kms:
      return "sse-kms";
    case StorageEncryptionType::sse_rds:
      return "sse-rds";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageEncryptionTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
