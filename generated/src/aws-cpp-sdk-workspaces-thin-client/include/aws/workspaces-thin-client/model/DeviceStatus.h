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
  enum class DeviceStatus
  {
    NOT_SET,
    REGISTERED,
    DEREGISTERING,
    DEREGISTERED,
    ARCHIVED
  };

namespace DeviceStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API DeviceStatus GetDeviceStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForDeviceStatus(DeviceStatus value);
} // namespace DeviceStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
