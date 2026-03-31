/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/AccessType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace AccessTypeMapper {

static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");

AccessType GetAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIVATE__HASH) {
    return AccessType::PRIVATE_;
  } else if (hashCode == PUBLIC__HASH) {
    return AccessType::PUBLIC_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessType>(hashCode);
  }

  return AccessType::NOT_SET;
}

Aws::String GetNameForAccessType(AccessType enumValue) {
  switch (enumValue) {
    case AccessType::NOT_SET:
      return {};
    case AccessType::PRIVATE_:
      return "PRIVATE";
    case AccessType::PUBLIC_:
      return "PUBLIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
