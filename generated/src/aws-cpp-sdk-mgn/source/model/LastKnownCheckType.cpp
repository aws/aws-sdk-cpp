/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/LastKnownCheckType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace LastKnownCheckTypeMapper {

static const int EC2_HASH = HashingUtils::HashString("EC2");
static const int FSx_HASH = HashingUtils::HashString("FSx");

LastKnownCheckType GetLastKnownCheckTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_HASH) {
    return LastKnownCheckType::EC2;
  } else if (hashCode == FSx_HASH) {
    return LastKnownCheckType::FSx;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LastKnownCheckType>(hashCode);
  }

  return LastKnownCheckType::NOT_SET;
}

Aws::String GetNameForLastKnownCheckType(LastKnownCheckType enumValue) {
  switch (enumValue) {
    case LastKnownCheckType::NOT_SET:
      return {};
    case LastKnownCheckType::EC2:
      return "EC2";
    case LastKnownCheckType::FSx:
      return "FSx";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LastKnownCheckTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
