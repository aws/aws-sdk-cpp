/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class GrantType
  {
    NOT_SET,
    authorization_code,
    refresh_token,
    urn_ietf_params_oauth_grant_type_jwt_bearer,
    urn_ietf_params_oauth_grant_type_token_exchange
  };

namespace GrantTypeMapper
{
AWS_SSOADMIN_API GrantType GetGrantTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForGrantType(GrantType value);
} // namespace GrantTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
