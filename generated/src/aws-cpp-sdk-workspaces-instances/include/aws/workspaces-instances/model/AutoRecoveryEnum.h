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
  enum class AutoRecoveryEnum
  {
    NOT_SET,
    disabled,
    default_
  };

namespace AutoRecoveryEnumMapper
{
AWS_WORKSPACESINSTANCES_API AutoRecoveryEnum GetAutoRecoveryEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForAutoRecoveryEnum(AutoRecoveryEnum value);
} // namespace AutoRecoveryEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
