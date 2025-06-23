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
  enum class TenancyEnum
  {
    NOT_SET,
    default_,
    dedicated,
    host
  };

namespace TenancyEnumMapper
{
AWS_WORKSPACESINSTANCES_API TenancyEnum GetTenancyEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForTenancyEnum(TenancyEnum value);
} // namespace TenancyEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
