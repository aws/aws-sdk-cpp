/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    SAML
  };

namespace AuthenticationTypeMapper
{
AWS_WORKSPACES_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
