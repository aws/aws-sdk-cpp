/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/model/S3ObjectLockRetentionEventHold.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {
namespace S3ObjectLockRetentionEventHoldMapper {

static const int ON_HASH = HashingUtils::HashString("ON");
static const int OFF_HASH = HashingUtils::HashString("OFF");

S3ObjectLockRetentionEventHold GetS3ObjectLockRetentionEventHoldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_HASH) {
    return S3ObjectLockRetentionEventHold::ON;
  } else if (hashCode == OFF_HASH) {
    return S3ObjectLockRetentionEventHold::OFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3ObjectLockRetentionEventHold>(hashCode);
  }

  return S3ObjectLockRetentionEventHold::NOT_SET;
}

Aws::String GetNameForS3ObjectLockRetentionEventHold(S3ObjectLockRetentionEventHold enumValue) {
  switch (enumValue) {
    case S3ObjectLockRetentionEventHold::NOT_SET:
      return {};
    case S3ObjectLockRetentionEventHold::ON:
      return "ON";
    case S3ObjectLockRetentionEventHold::OFF:
      return "OFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3ObjectLockRetentionEventHoldMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
