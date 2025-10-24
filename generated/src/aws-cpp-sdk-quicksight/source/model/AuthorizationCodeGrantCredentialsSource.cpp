/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AuthorizationCodeGrantCredentialsSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AuthorizationCodeGrantCredentialsSourceMapper {

static const int PLAIN_CREDENTIALS_HASH = HashingUtils::HashString("PLAIN_CREDENTIALS");

AuthorizationCodeGrantCredentialsSource GetAuthorizationCodeGrantCredentialsSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PLAIN_CREDENTIALS_HASH) {
    return AuthorizationCodeGrantCredentialsSource::PLAIN_CREDENTIALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthorizationCodeGrantCredentialsSource>(hashCode);
  }

  return AuthorizationCodeGrantCredentialsSource::NOT_SET;
}

Aws::String GetNameForAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource enumValue) {
  switch (enumValue) {
    case AuthorizationCodeGrantCredentialsSource::NOT_SET:
      return {};
    case AuthorizationCodeGrantCredentialsSource::PLAIN_CREDENTIALS:
      return "PLAIN_CREDENTIALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthorizationCodeGrantCredentialsSourceMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
