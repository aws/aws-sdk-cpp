/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/ExistingCustomerWebACLResolution.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace ExistingCustomerWebACLResolutionMapper {

static const int RETROFIT_HASH = HashingUtils::HashString("RETROFIT");
static const int OVERRIDE_ASSOCIATION_HASH = HashingUtils::HashString("OVERRIDE_ASSOCIATION");
static const int NO_REMEDIATION_HASH = HashingUtils::HashString("NO_REMEDIATION");

ExistingCustomerWebACLResolution GetExistingCustomerWebACLResolutionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RETROFIT_HASH) {
    return ExistingCustomerWebACLResolution::RETROFIT;
  } else if (hashCode == OVERRIDE_ASSOCIATION_HASH) {
    return ExistingCustomerWebACLResolution::OVERRIDE_ASSOCIATION;
  } else if (hashCode == NO_REMEDIATION_HASH) {
    return ExistingCustomerWebACLResolution::NO_REMEDIATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExistingCustomerWebACLResolution>(hashCode);
  }

  return ExistingCustomerWebACLResolution::NOT_SET;
}

Aws::String GetNameForExistingCustomerWebACLResolution(ExistingCustomerWebACLResolution enumValue) {
  switch (enumValue) {
    case ExistingCustomerWebACLResolution::NOT_SET:
      return {};
    case ExistingCustomerWebACLResolution::RETROFIT:
      return "RETROFIT";
    case ExistingCustomerWebACLResolution::OVERRIDE_ASSOCIATION:
      return "OVERRIDE_ASSOCIATION";
    case ExistingCustomerWebACLResolution::NO_REMEDIATION:
      return "NO_REMEDIATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExistingCustomerWebACLResolutionMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
