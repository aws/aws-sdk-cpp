/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/QuickAuthenticationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace QuickAuthenticationTypeMapper {

static const int QUICK_MANAGED_PUBLIC_AUTH_CODE_HASH = HashingUtils::HashString("QUICK_MANAGED_PUBLIC_AUTH_CODE");

QuickAuthenticationType GetQuickAuthenticationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUICK_MANAGED_PUBLIC_AUTH_CODE_HASH) {
    return QuickAuthenticationType::QUICK_MANAGED_PUBLIC_AUTH_CODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuickAuthenticationType>(hashCode);
  }

  return QuickAuthenticationType::NOT_SET;
}

Aws::String GetNameForQuickAuthenticationType(QuickAuthenticationType enumValue) {
  switch (enumValue) {
    case QuickAuthenticationType::NOT_SET:
      return {};
    case QuickAuthenticationType::QUICK_MANAGED_PUBLIC_AUTH_CODE:
      return "QUICK_MANAGED_PUBLIC_AUTH_CODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuickAuthenticationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
