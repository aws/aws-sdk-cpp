/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{
  enum class OpenIdIssuer
  {
    NOT_SET,
    COGNITO
  };

namespace OpenIdIssuerMapper
{
AWS_VERIFIEDPERMISSIONS_API OpenIdIssuer GetOpenIdIssuerForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForOpenIdIssuer(OpenIdIssuer value);
} // namespace OpenIdIssuerMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
