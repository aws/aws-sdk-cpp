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
  enum class AmdSevSnpEnum
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace AmdSevSnpEnumMapper
{
AWS_WORKSPACESINSTANCES_API AmdSevSnpEnum GetAmdSevSnpEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForAmdSevSnpEnum(AmdSevSnpEnum value);
} // namespace AmdSevSnpEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
