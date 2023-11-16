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
  enum class SignInOrigin
  {
    NOT_SET,
    IDENTITY_CENTER,
    APPLICATION
  };

namespace SignInOriginMapper
{
AWS_SSOADMIN_API SignInOrigin GetSignInOriginForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForSignInOrigin(SignInOrigin value);
} // namespace SignInOriginMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
