/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3vectors/model/IndexMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {
namespace IndexModeMapper {

static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");

IndexMode GetIndexModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLASSIC_HASH) {
    return IndexMode::CLASSIC;
  } else if (hashCode == ENHANCED_HASH) {
    return IndexMode::ENHANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IndexMode>(hashCode);
  }

  return IndexMode::NOT_SET;
}

Aws::String GetNameForIndexMode(IndexMode enumValue) {
  switch (enumValue) {
    case IndexMode::NOT_SET:
      return {};
    case IndexMode::CLASSIC:
      return "CLASSIC";
    case IndexMode::ENHANCED:
      return "ENHANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndexModeMapper
}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
