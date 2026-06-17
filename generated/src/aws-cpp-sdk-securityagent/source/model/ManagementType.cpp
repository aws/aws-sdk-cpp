/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ManagementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ManagementTypeMapper {

static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

ManagementType GetManagementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_HASH) {
    return ManagementType::AWS_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return ManagementType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagementType>(hashCode);
  }

  return ManagementType::NOT_SET;
}

Aws::String GetNameForManagementType(ManagementType enumValue) {
  switch (enumValue) {
    case ManagementType::NOT_SET:
      return {};
    case ManagementType::AWS_MANAGED:
      return "AWS_MANAGED";
    case ManagementType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagementTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
