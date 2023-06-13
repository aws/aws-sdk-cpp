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
  enum class ResourceType
  {
    NOT_SET,
    IDENTITY_SOURCE,
    POLICY_STORE,
    POLICY,
    POLICY_TEMPLATE,
    SCHEMA
  };

namespace ResourceTypeMapper
{
AWS_VERIFIEDPERMISSIONS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
