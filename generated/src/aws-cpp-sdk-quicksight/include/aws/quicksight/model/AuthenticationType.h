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
  enum class AuthenticationType
  {
    NOT_SET,
    PASSWORD,
    TOKEN,
    X509
  };

namespace AuthenticationTypeMapper
{
AWS_QUICKSIGHT_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
