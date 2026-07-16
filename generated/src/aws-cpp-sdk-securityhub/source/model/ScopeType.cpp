/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ScopeTypeMapper {

static const int TENANT_HASH = HashingUtils::HashString("TENANT");
static const int SUBSCRIPTION_HASH = HashingUtils::HashString("SUBSCRIPTION");

ScopeType GetScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TENANT_HASH) {
    return ScopeType::TENANT;
  } else if (hashCode == SUBSCRIPTION_HASH) {
    return ScopeType::SUBSCRIPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScopeType>(hashCode);
  }

  return ScopeType::NOT_SET;
}

Aws::String GetNameForScopeType(ScopeType enumValue) {
  switch (enumValue) {
    case ScopeType::NOT_SET:
      return {};
    case ScopeType::TENANT:
      return "TENANT";
    case ScopeType::SUBSCRIPTION:
      return "SUBSCRIPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
