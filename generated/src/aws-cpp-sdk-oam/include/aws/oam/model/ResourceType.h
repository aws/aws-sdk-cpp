/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OAM
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_CloudWatch_Metric,
    AWS_Logs_LogGroup,
    AWS_XRay_Trace
  };

namespace ResourceTypeMapper
{
AWS_OAM_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_OAM_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace OAM
} // namespace Aws
