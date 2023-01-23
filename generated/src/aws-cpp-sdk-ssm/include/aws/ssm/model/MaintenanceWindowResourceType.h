/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class MaintenanceWindowResourceType
  {
    NOT_SET,
    INSTANCE,
    RESOURCE_GROUP
  };

namespace MaintenanceWindowResourceTypeMapper
{
AWS_SSM_API MaintenanceWindowResourceType GetMaintenanceWindowResourceTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForMaintenanceWindowResourceType(MaintenanceWindowResourceType value);
} // namespace MaintenanceWindowResourceTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
