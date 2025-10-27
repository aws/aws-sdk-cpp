/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>

namespace Aws {
namespace SnowDeviceManagement {
namespace Model {
enum class InstanceStateName { NOT_SET, PENDING, RUNNING, SHUTTING_DOWN, TERMINATED, STOPPING, STOPPED };

namespace InstanceStateNameMapper {
AWS_SNOWDEVICEMANAGEMENT_API InstanceStateName GetInstanceStateNameForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForInstanceStateName(InstanceStateName value);
}  // namespace InstanceStateNameMapper
}  // namespace Model
}  // namespace SnowDeviceManagement
}  // namespace Aws
