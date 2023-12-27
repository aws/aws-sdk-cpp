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
  enum class TargetDeviceStatus
  {
    NOT_SET,
    DEREGISTERED,
    ARCHIVED
  };

namespace TargetDeviceStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API TargetDeviceStatus GetTargetDeviceStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForTargetDeviceStatus(TargetDeviceStatus value);
} // namespace TargetDeviceStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
