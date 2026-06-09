/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/SuppressionListScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace SuppressionListScopeMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int TENANT_HASH = HashingUtils::HashString("TENANT");

SuppressionListScope GetSuppressionListScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return SuppressionListScope::ACCOUNT;
  } else if (hashCode == TENANT_HASH) {
    return SuppressionListScope::TENANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SuppressionListScope>(hashCode);
  }

  return SuppressionListScope::NOT_SET;
}

Aws::String GetNameForSuppressionListScope(SuppressionListScope enumValue) {
  switch (enumValue) {
    case SuppressionListScope::NOT_SET:
      return {};
    case SuppressionListScope::ACCOUNT:
      return "ACCOUNT";
    case SuppressionListScope::TENANT:
      return "TENANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SuppressionListScopeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
