/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/ValidationFindingScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace ValidationFindingScopeTypeMapper {

static const int azure_tenant_HASH = HashingUtils::HashString("azure:tenant");
static const int azure_subscription_HASH = HashingUtils::HashString("azure:subscription");

ValidationFindingScopeType GetValidationFindingScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == azure_tenant_HASH) {
    return ValidationFindingScopeType::azure_tenant;
  } else if (hashCode == azure_subscription_HASH) {
    return ValidationFindingScopeType::azure_subscription;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationFindingScopeType>(hashCode);
  }

  return ValidationFindingScopeType::NOT_SET;
}

Aws::String GetNameForValidationFindingScopeType(ValidationFindingScopeType enumValue) {
  switch (enumValue) {
    case ValidationFindingScopeType::NOT_SET:
      return {};
    case ValidationFindingScopeType::azure_tenant:
      return "azure:tenant";
    case ValidationFindingScopeType::azure_subscription:
      return "azure:subscription";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationFindingScopeTypeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
