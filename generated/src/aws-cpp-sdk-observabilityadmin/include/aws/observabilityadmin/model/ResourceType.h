/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_EC2_Instance,
    AWS_EC2_VPC,
    AWS_Lambda_Function
  };

namespace ResourceTypeMapper
{
AWS_OBSERVABILITYADMIN_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
