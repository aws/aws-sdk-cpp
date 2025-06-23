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
  enum class HostnameTypeEnum
  {
    NOT_SET,
    ip_name,
    resource_name
  };

namespace HostnameTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API HostnameTypeEnum GetHostnameTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForHostnameTypeEnum(HostnameTypeEnum value);
} // namespace HostnameTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
