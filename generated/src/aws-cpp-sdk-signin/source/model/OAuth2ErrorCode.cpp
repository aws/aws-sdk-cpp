/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signin/model/OAuth2ErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {
namespace OAuth2ErrorCodeMapper {

static const int TOKEN_EXPIRED_HASH = HashingUtils::HashString("TOKEN_EXPIRED");
static const int USER_CREDENTIALS_CHANGED_HASH = HashingUtils::HashString("USER_CREDENTIALS_CHANGED");
static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSIONS");
static const int AUTHCODE_EXPIRED_HASH = HashingUtils::HashString("AUTHCODE_EXPIRED");
static const int server_error_HASH = HashingUtils::HashString("server_error");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("INVALID_REQUEST");

OAuth2ErrorCode GetOAuth2ErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOKEN_EXPIRED_HASH) {
    return OAuth2ErrorCode::TOKEN_EXPIRED;
  } else if (hashCode == USER_CREDENTIALS_CHANGED_HASH) {
    return OAuth2ErrorCode::USER_CREDENTIALS_CHANGED;
  } else if (hashCode == INSUFFICIENT_PERMISSIONS_HASH) {
    return OAuth2ErrorCode::INSUFFICIENT_PERMISSIONS;
  } else if (hashCode == AUTHCODE_EXPIRED_HASH) {
    return OAuth2ErrorCode::AUTHCODE_EXPIRED;
  } else if (hashCode == server_error_HASH) {
    return OAuth2ErrorCode::server_error;
  } else if (hashCode == INVALID_REQUEST_HASH) {
    return OAuth2ErrorCode::INVALID_REQUEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OAuth2ErrorCode>(hashCode);
  }

  return OAuth2ErrorCode::NOT_SET;
}

Aws::String GetNameForOAuth2ErrorCode(OAuth2ErrorCode enumValue) {
  switch (enumValue) {
    case OAuth2ErrorCode::NOT_SET:
      return {};
    case OAuth2ErrorCode::TOKEN_EXPIRED:
      return "TOKEN_EXPIRED";
    case OAuth2ErrorCode::USER_CREDENTIALS_CHANGED:
      return "USER_CREDENTIALS_CHANGED";
    case OAuth2ErrorCode::INSUFFICIENT_PERMISSIONS:
      return "INSUFFICIENT_PERMISSIONS";
    case OAuth2ErrorCode::AUTHCODE_EXPIRED:
      return "AUTHCODE_EXPIRED";
    case OAuth2ErrorCode::server_error:
      return "server_error";
    case OAuth2ErrorCode::INVALID_REQUEST:
      return "INVALID_REQUEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OAuth2ErrorCodeMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
