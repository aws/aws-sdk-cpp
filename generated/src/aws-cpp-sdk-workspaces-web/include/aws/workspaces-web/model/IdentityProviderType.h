/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class IdentityProviderType
  {
    NOT_SET,
    SAML,
    Facebook,
    Google,
    LoginWithAmazon,
    SignInWithApple,
    OIDC
  };

namespace IdentityProviderTypeMapper
{
AWS_WORKSPACESWEB_API IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForIdentityProviderType(IdentityProviderType value);
} // namespace IdentityProviderTypeMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
