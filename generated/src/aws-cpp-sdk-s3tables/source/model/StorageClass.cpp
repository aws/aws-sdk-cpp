/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/StorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace StorageClassMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");

StorageClass GetStorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return StorageClass::STANDARD;
  } else if (hashCode == INTELLIGENT_TIERING_HASH) {
    return StorageClass::INTELLIGENT_TIERING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageClass>(hashCode);
  }

  return StorageClass::NOT_SET;
}

Aws::String GetNameForStorageClass(StorageClass enumValue) {
  switch (enumValue) {
    case StorageClass::NOT_SET:
      return {};
    case StorageClass::STANDARD:
      return "STANDARD";
    case StorageClass::INTELLIGENT_TIERING:
      return "INTELLIGENT_TIERING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageClassMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
