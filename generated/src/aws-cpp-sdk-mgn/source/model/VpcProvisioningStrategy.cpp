/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/VpcProvisioningStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace VpcProvisioningStrategyMapper {

static const int CREATE_NEW_HASH = HashingUtils::HashString("CREATE_NEW");
static const int USE_EXISTING_HASH = HashingUtils::HashString("USE_EXISTING");

VpcProvisioningStrategy GetVpcProvisioningStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_NEW_HASH) {
    return VpcProvisioningStrategy::CREATE_NEW;
  } else if (hashCode == USE_EXISTING_HASH) {
    return VpcProvisioningStrategy::USE_EXISTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcProvisioningStrategy>(hashCode);
  }

  return VpcProvisioningStrategy::NOT_SET;
}

Aws::String GetNameForVpcProvisioningStrategy(VpcProvisioningStrategy enumValue) {
  switch (enumValue) {
    case VpcProvisioningStrategy::NOT_SET:
      return {};
    case VpcProvisioningStrategy::CREATE_NEW:
      return "CREATE_NEW";
    case VpcProvisioningStrategy::USE_EXISTING:
      return "USE_EXISTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcProvisioningStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
