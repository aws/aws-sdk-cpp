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
  enum class TrustedTokenIssuerType
  {
    NOT_SET,
    OIDC_JWT
  };

namespace TrustedTokenIssuerTypeMapper
{
AWS_SSOADMIN_API TrustedTokenIssuerType GetTrustedTokenIssuerTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForTrustedTokenIssuerType(TrustedTokenIssuerType value);
} // namespace TrustedTokenIssuerTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
