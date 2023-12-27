/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{
  enum class MonitorState
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    INACTIVE,
    ERROR_,
    DELETING
  };

namespace MonitorStateMapper
{
AWS_NETWORKMONITOR_API MonitorState GetMonitorStateForName(const Aws::String& name);

AWS_NETWORKMONITOR_API Aws::String GetNameForMonitorState(MonitorState value);
} // namespace MonitorStateMapper
} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
