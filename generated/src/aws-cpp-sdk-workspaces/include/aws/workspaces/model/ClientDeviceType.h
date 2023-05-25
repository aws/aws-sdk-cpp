/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class ClientDeviceType
  {
    NOT_SET,
    DeviceTypeWindows,
    DeviceTypeOsx,
    DeviceTypeAndroid,
    DeviceTypeIos,
    DeviceTypeLinux,
    DeviceTypeWeb
  };

namespace ClientDeviceTypeMapper
{
AWS_WORKSPACES_API ClientDeviceType GetClientDeviceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForClientDeviceType(ClientDeviceType value);
} // namespace ClientDeviceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
