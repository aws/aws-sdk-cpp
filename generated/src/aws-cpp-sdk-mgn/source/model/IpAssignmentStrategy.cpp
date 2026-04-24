/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/IpAssignmentStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace IpAssignmentStrategyMapper {

static const int STATIC__HASH = HashingUtils::HashString("STATIC");
static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");

IpAssignmentStrategy GetIpAssignmentStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATIC__HASH) {
    return IpAssignmentStrategy::STATIC_;
  } else if (hashCode == DYNAMIC_HASH) {
    return IpAssignmentStrategy::DYNAMIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpAssignmentStrategy>(hashCode);
  }

  return IpAssignmentStrategy::NOT_SET;
}

Aws::String GetNameForIpAssignmentStrategy(IpAssignmentStrategy enumValue) {
  switch (enumValue) {
    case IpAssignmentStrategy::NOT_SET:
      return {};
    case IpAssignmentStrategy::STATIC_:
      return "STATIC";
    case IpAssignmentStrategy::DYNAMIC:
      return "DYNAMIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpAssignmentStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
