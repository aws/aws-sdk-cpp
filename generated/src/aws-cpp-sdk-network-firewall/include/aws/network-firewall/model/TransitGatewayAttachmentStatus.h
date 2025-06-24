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
  enum class TransitGatewayAttachmentStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    DELETED,
    FAILED,
    ERROR_,
    READY,
    PENDING_ACCEPTANCE,
    REJECTING,
    REJECTED
  };

namespace TransitGatewayAttachmentStatusMapper
{
AWS_NETWORKFIREWALL_API TransitGatewayAttachmentStatus GetTransitGatewayAttachmentStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus value);
} // namespace TransitGatewayAttachmentStatusMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
