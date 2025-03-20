/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class FlowOperationStatus
  {
    NOT_SET,
    COMPLETED,
    IN_PROGRESS,
    FAILED,
    COMPLETED_WITH_ERRORS
  };

namespace FlowOperationStatusMapper
{
AWS_NETWORKFIREWALL_API FlowOperationStatus GetFlowOperationStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFlowOperationStatus(FlowOperationStatus value);
} // namespace FlowOperationStatusMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
