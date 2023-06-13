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
  enum class PolicyType
  {
    NOT_SET,
    STATIC_,
    TEMPLATE_LINKED
  };

namespace PolicyTypeMapper
{
AWS_VERIFIEDPERMISSIONS_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
