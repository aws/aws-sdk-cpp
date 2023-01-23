/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    ManagedInstance,
    Document,
    EC2Instance
  };

namespace ResourceTypeMapper
{
AWS_SSM_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
