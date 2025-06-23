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
  enum class VolumeTypeEnum
  {
    NOT_SET,
    standard,
    io1,
    io2,
    gp2,
    sc1,
    st1,
    gp3
  };

namespace VolumeTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API VolumeTypeEnum GetVolumeTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForVolumeTypeEnum(VolumeTypeEnum value);
} // namespace VolumeTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
