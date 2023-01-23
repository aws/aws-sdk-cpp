/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    APPLICATION_LOAD_BALANCER,
    API_GATEWAY
  };

namespace ResourceTypeMapper
{
AWS_WAFREGIONAL_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
