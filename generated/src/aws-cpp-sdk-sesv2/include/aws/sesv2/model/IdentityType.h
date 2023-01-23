/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class IdentityType
  {
    NOT_SET,
    EMAIL_ADDRESS,
    DOMAIN_,
    MANAGED_DOMAIN
  };

namespace IdentityTypeMapper
{
AWS_SESV2_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
