/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{
  enum class MonitorLocalResourceType
  {
    NOT_SET,
    AWS_EC2_VPC,
    AWS_AvailabilityZone,
    AWS_EC2_Subnet,
    AWS_Region
  };

namespace MonitorLocalResourceTypeMapper
{
AWS_NETWORKFLOWMONITOR_API MonitorLocalResourceType GetMonitorLocalResourceTypeForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForMonitorLocalResourceType(MonitorLocalResourceType value);
} // namespace MonitorLocalResourceTypeMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
