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
  enum class InterfaceTypeEnum
  {
    NOT_SET,
    interface,
    efa,
    efa_only
  };

namespace InterfaceTypeEnumMapper
{
AWS_WORKSPACESINSTANCES_API InterfaceTypeEnum GetInterfaceTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForInterfaceTypeEnum(InterfaceTypeEnum value);
} // namespace InterfaceTypeEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
