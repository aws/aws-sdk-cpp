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
  enum class SpotInstanceTypeEnum
  {
    NOT_SET,
    one_time,
    persistent
  };

namespace SpotInstanceTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API SpotInstanceTypeEnum GetSpotInstanceTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForSpotInstanceTypeEnum(SpotInstanceTypeEnum value);
} // namespace SpotInstanceTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
