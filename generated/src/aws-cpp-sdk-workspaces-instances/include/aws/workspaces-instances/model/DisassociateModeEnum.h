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
  enum class DisassociateModeEnum
  {
    NOT_SET,
    FORCE,
    NO_FORCE
  };

namespace DisassociateModeEnumMapper
{
AWS_WORKSPACESINSTANCES_API DisassociateModeEnum GetDisassociateModeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForDisassociateModeEnum(DisassociateModeEnum value);
} // namespace DisassociateModeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
