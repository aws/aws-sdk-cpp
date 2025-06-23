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
  enum class ProvisionStateEnum
  {
    NOT_SET,
    ALLOCATING,
    ALLOCATED,
    DEALLOCATING,
    DEALLOCATED,
    ERROR_ALLOCATING,
    ERROR_DEALLOCATING
  };

namespace ProvisionStateEnumMapper
{
AWS_WORKSPACESINSTANCES_API ProvisionStateEnum GetProvisionStateEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForProvisionStateEnum(ProvisionStateEnum value);
} // namespace ProvisionStateEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
