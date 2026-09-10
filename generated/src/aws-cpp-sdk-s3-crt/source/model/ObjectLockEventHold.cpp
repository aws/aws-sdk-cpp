/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-crt/model/ObjectLockEventHold.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {
namespace ObjectLockEventHoldMapper {

static const int ON_HASH = HashingUtils::HashString("ON");
static const int OFF_HASH = HashingUtils::HashString("OFF");

ObjectLockEventHold GetObjectLockEventHoldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_HASH) {
    return ObjectLockEventHold::ON;
  } else if (hashCode == OFF_HASH) {
    return ObjectLockEventHold::OFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ObjectLockEventHold>(hashCode);
  }

  return ObjectLockEventHold::NOT_SET;
}

Aws::String GetNameForObjectLockEventHold(ObjectLockEventHold enumValue) {
  switch (enumValue) {
    case ObjectLockEventHold::NOT_SET:
      return {};
    case ObjectLockEventHold::ON:
      return "ON";
    case ObjectLockEventHold::OFF:
      return "OFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ObjectLockEventHoldMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
