/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class ResourceTypeEnum
  {
    NOT_SET,
    instance,
    volume,
    spot_instances_request,
    network_interface
  };

namespace ResourceTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API ResourceTypeEnum GetResourceTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForResourceTypeEnum(ResourceTypeEnum value);
} // namespace ResourceTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
