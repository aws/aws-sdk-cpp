/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/OAuthClientAuthenticationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace OAuthClientAuthenticationTypeMapper {

static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");

OAuthClientAuthenticationType GetOAuthClientAuthenticationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOKEN_HASH) {
    return OAuthClientAuthenticationType::TOKEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OAuthClientAuthenticationType>(hashCode);
  }

  return OAuthClientAuthenticationType::NOT_SET;
}

Aws::String GetNameForOAuthClientAuthenticationType(OAuthClientAuthenticationType enumValue) {
  switch (enumValue) {
    case OAuthClientAuthenticationType::NOT_SET:
      return {};
    case OAuthClientAuthenticationType::TOKEN:
      return "TOKEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OAuthClientAuthenticationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
