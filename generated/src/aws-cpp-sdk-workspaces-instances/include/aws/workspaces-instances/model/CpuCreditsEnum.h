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
  enum class CpuCreditsEnum
  {
    NOT_SET,
    standard,
    unlimited
  };

namespace CpuCreditsEnumMapper
{
AWS_WORKSPACESINSTANCES_API CpuCreditsEnum GetCpuCreditsEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForCpuCreditsEnum(CpuCreditsEnum value);
} // namespace CpuCreditsEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
