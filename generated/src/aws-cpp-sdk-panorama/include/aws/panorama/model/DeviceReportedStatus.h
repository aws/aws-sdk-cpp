/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class DeviceReportedStatus
  {
    NOT_SET,
    STOPPING,
    STOPPED,
    STOP_ERROR,
    REMOVAL_FAILED,
    REMOVAL_IN_PROGRESS,
    STARTING,
    RUNNING,
    INSTALL_ERROR,
    LAUNCHED,
    LAUNCH_ERROR,
    INSTALL_IN_PROGRESS
  };

namespace DeviceReportedStatusMapper
{
AWS_PANORAMA_API DeviceReportedStatus GetDeviceReportedStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceReportedStatus(DeviceReportedStatus value);
} // namespace DeviceReportedStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
