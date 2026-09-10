/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/model/S3ObjectLockEventHold.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {
namespace S3ObjectLockEventHoldMapper {

static const int ON_HASH = HashingUtils::HashString("ON");
static const int OFF_HASH = HashingUtils::HashString("OFF");

S3ObjectLockEventHold GetS3ObjectLockEventHoldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_HASH) {
    return S3ObjectLockEventHold::ON;
  } else if (hashCode == OFF_HASH) {
    return S3ObjectLockEventHold::OFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3ObjectLockEventHold>(hashCode);
  }

  return S3ObjectLockEventHold::NOT_SET;
}

Aws::String GetNameForS3ObjectLockEventHold(S3ObjectLockEventHold enumValue) {
  switch (enumValue) {
    case S3ObjectLockEventHold::NOT_SET:
      return {};
    case S3ObjectLockEventHold::ON:
      return "ON";
    case S3ObjectLockEventHold::OFF:
      return "OFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3ObjectLockEventHoldMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
