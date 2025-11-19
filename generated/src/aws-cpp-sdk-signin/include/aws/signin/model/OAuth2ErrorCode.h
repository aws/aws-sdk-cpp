/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Model {
enum class OAuth2ErrorCode {
  NOT_SET,
  TOKEN_EXPIRED,
  USER_CREDENTIALS_CHANGED,
  INSUFFICIENT_PERMISSIONS,
  AUTHCODE_EXPIRED,
  server_error,
  INVALID_REQUEST
};

namespace OAuth2ErrorCodeMapper {
AWS_SIGNIN_API OAuth2ErrorCode GetOAuth2ErrorCodeForName(const Aws::String& name);

AWS_SIGNIN_API Aws::String GetNameForOAuth2ErrorCode(OAuth2ErrorCode value);
}  // namespace OAuth2ErrorCodeMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
