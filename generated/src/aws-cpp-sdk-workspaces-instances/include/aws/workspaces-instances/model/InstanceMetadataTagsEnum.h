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
  enum class InstanceMetadataTagsEnum
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace InstanceMetadataTagsEnumMapper
{
AWS_WORKSPACESINSTANCES_API InstanceMetadataTagsEnum GetInstanceMetadataTagsEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForInstanceMetadataTagsEnum(InstanceMetadataTagsEnum value);
} // namespace InstanceMetadataTagsEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
