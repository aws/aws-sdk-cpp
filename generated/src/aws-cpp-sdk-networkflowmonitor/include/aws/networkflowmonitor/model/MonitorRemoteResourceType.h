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
  enum class MonitorRemoteResourceType
  {
    NOT_SET,
    AWS_EC2_VPC,
    AWS_AvailabilityZone,
    AWS_EC2_Subnet,
    AWS_AWSService,
    AWS_Region
  };

namespace MonitorRemoteResourceTypeMapper
{
AWS_NETWORKFLOWMONITOR_API MonitorRemoteResourceType GetMonitorRemoteResourceTypeForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForMonitorRemoteResourceType(MonitorRemoteResourceType value);
} // namespace MonitorRemoteResourceTypeMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
