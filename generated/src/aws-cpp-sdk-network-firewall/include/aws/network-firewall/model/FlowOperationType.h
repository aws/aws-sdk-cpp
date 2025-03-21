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
  enum class FlowOperationType
  {
    NOT_SET,
    FLOW_FLUSH,
    FLOW_CAPTURE
  };

namespace FlowOperationTypeMapper
{
AWS_NETWORKFIREWALL_API FlowOperationType GetFlowOperationTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForFlowOperationType(FlowOperationType value);
} // namespace FlowOperationTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
