/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AuthType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AuthTypeMapper {

static const int THREE_LEGGED_OAUTH_HASH = HashingUtils::HashString("THREE_LEGGED_OAUTH");
static const int TWO_LEGGED_OAUTH_HASH = HashingUtils::HashString("TWO_LEGGED_OAUTH");
static const int SERVICE_ACCOUNT_HASH = HashingUtils::HashString("SERVICE_ACCOUNT");

AuthType GetAuthTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THREE_LEGGED_OAUTH_HASH) {
    return AuthType::THREE_LEGGED_OAUTH;
  } else if (hashCode == TWO_LEGGED_OAUTH_HASH) {
    return AuthType::TWO_LEGGED_OAUTH;
  } else if (hashCode == SERVICE_ACCOUNT_HASH) {
    return AuthType::SERVICE_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthType>(hashCode);
  }

  return AuthType::NOT_SET;
}

Aws::String GetNameForAuthType(AuthType enumValue) {
  switch (enumValue) {
    case AuthType::NOT_SET:
      return {};
    case AuthType::THREE_LEGGED_OAUTH:
      return "THREE_LEGGED_OAUTH";
    case AuthType::TWO_LEGGED_OAUTH:
      return "TWO_LEGGED_OAUTH";
    case AuthType::SERVICE_ACCOUNT:
      return "SERVICE_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
