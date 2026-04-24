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
enum class MaintenanceScheduleType { NOT_SET, WINDOW };

namespace MaintenanceScheduleTypeMapper {
AWS_MEDIACONNECT_API MaintenanceScheduleType GetMaintenanceScheduleTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMaintenanceScheduleType(MaintenanceScheduleType value);
}  // namespace MaintenanceScheduleTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
