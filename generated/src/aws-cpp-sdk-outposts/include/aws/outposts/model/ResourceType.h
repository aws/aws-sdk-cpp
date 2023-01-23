/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    OUTPOST,
    ORDER
  };

namespace ResourceTypeMapper
{
AWS_OUTPOSTS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
