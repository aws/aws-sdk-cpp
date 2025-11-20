/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class MaintenanceType { NOT_SET, PREFERRED_DAY_TIME, DEFAULT };

namespace MaintenanceTypeMapper {
AWS_MEDIACONNECT_API MaintenanceType GetMaintenanceTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMaintenanceType(MaintenanceType value);
}  // namespace MaintenanceTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
