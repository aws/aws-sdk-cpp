/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/model/BucketAbacStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {
namespace BucketAbacStatusMapper {

static const int Enabled_HASH = HashingUtils::HashString("Enabled");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

BucketAbacStatus GetBucketAbacStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enabled_HASH) {
    return BucketAbacStatus::Enabled;
  } else if (hashCode == Disabled_HASH) {
    return BucketAbacStatus::Disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BucketAbacStatus>(hashCode);
  }

  return BucketAbacStatus::NOT_SET;
}

Aws::String GetNameForBucketAbacStatus(BucketAbacStatus enumValue) {
  switch (enumValue) {
    case BucketAbacStatus::NOT_SET:
      return {};
    case BucketAbacStatus::Enabled:
      return "Enabled";
    case BucketAbacStatus::Disabled:
      return "Disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BucketAbacStatusMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
