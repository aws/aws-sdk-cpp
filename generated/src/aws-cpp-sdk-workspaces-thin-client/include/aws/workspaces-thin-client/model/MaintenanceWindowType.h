/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{
  enum class MaintenanceWindowType
  {
    NOT_SET,
    SYSTEM,
    CUSTOM
  };

namespace MaintenanceWindowTypeMapper
{
AWS_WORKSPACESTHINCLIENT_API MaintenanceWindowType GetMaintenanceWindowTypeForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForMaintenanceWindowType(MaintenanceWindowType value);
} // namespace MaintenanceWindowTypeMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
