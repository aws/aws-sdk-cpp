/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ApplicableToType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ApplicableToTypeMapper {

static const int GROUP_HASH = HashingUtils::HashString("GROUP");

ApplicableToType GetApplicableToTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GROUP_HASH) {
    return ApplicableToType::GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicableToType>(hashCode);
  }

  return ApplicableToType::NOT_SET;
}

Aws::String GetNameForApplicableToType(ApplicableToType enumValue) {
  switch (enumValue) {
    case ApplicableToType::NOT_SET:
      return {};
    case ApplicableToType::GROUP:
      return "GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicableToTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
