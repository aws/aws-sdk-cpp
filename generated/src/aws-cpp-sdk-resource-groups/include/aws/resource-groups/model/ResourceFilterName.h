/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class ResourceFilterName
  {
    NOT_SET,
    resource_type
  };

namespace ResourceFilterNameMapper
{
AWS_RESOURCEGROUPS_API ResourceFilterName GetResourceFilterNameForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForResourceFilterName(ResourceFilterName value);
} // namespace ResourceFilterNameMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
