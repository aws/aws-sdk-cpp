/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AccessControlApplicationAuthenticationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AccessControlApplicationAuthenticationTypeMapper {

static const int OIDC_HASH = HashingUtils::HashString("OIDC");

AccessControlApplicationAuthenticationType GetAccessControlApplicationAuthenticationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OIDC_HASH) {
    return AccessControlApplicationAuthenticationType::OIDC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessControlApplicationAuthenticationType>(hashCode);
  }

  return AccessControlApplicationAuthenticationType::NOT_SET;
}

Aws::String GetNameForAccessControlApplicationAuthenticationType(AccessControlApplicationAuthenticationType enumValue) {
  switch (enumValue) {
    case AccessControlApplicationAuthenticationType::NOT_SET:
      return {};
    case AccessControlApplicationAuthenticationType::OIDC:
      return "OIDC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessControlApplicationAuthenticationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
