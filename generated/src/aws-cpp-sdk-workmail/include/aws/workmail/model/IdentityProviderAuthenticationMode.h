/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class IdentityProviderAuthenticationMode
  {
    NOT_SET,
    IDENTITY_PROVIDER_ONLY,
    IDENTITY_PROVIDER_AND_DIRECTORY
  };

namespace IdentityProviderAuthenticationModeMapper
{
AWS_WORKMAIL_API IdentityProviderAuthenticationMode GetIdentityProviderAuthenticationModeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForIdentityProviderAuthenticationMode(IdentityProviderAuthenticationMode value);
} // namespace IdentityProviderAuthenticationModeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
