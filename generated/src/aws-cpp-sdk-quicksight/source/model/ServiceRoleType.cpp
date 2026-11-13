/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ServiceRoleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ServiceRoleTypeMapper {

static const int QUICKSIGHT_MANAGED_HASH = HashingUtils::HashString("QUICKSIGHT_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

ServiceRoleType GetServiceRoleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUICKSIGHT_MANAGED_HASH) {
    return ServiceRoleType::QUICKSIGHT_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return ServiceRoleType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceRoleType>(hashCode);
  }

  return ServiceRoleType::NOT_SET;
}

Aws::String GetNameForServiceRoleType(ServiceRoleType enumValue) {
  switch (enumValue) {
    case ServiceRoleType::NOT_SET:
      return {};
    case ServiceRoleType::QUICKSIGHT_MANAGED:
      return "QUICKSIGHT_MANAGED";
    case ServiceRoleType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceRoleTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
