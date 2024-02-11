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
  enum class AuthenticationMethodType
  {
    NOT_SET,
    IAM
  };

namespace AuthenticationMethodTypeMapper
{
AWS_SSOADMIN_API AuthenticationMethodType GetAuthenticationMethodTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForAuthenticationMethodType(AuthenticationMethodType value);
} // namespace AuthenticationMethodTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
