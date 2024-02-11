/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AuthenticationMethodOption
  {
    NOT_SET,
    IAM_AND_QUICKSIGHT,
    IAM_ONLY,
    ACTIVE_DIRECTORY,
    IAM_IDENTITY_CENTER
  };

namespace AuthenticationMethodOptionMapper
{
AWS_QUICKSIGHT_API AuthenticationMethodOption GetAuthenticationMethodOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAuthenticationMethodOption(AuthenticationMethodOption value);
} // namespace AuthenticationMethodOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
