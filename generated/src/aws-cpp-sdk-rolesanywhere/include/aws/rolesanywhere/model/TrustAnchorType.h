/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{
  enum class TrustAnchorType
  {
    NOT_SET,
    AWS_ACM_PCA,
    CERTIFICATE_BUNDLE,
    SELF_SIGNED_REPOSITORY
  };

namespace TrustAnchorTypeMapper
{
AWS_ROLESANYWHERE_API TrustAnchorType GetTrustAnchorTypeForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForTrustAnchorType(TrustAnchorType value);
} // namespace TrustAnchorTypeMapper
} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
