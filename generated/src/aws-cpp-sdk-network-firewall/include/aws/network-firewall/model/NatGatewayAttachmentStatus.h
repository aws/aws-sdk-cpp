/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class NatGatewayAttachmentStatus { NOT_SET, CREATING, READY, UPDATING, FAILED, DELETING };

namespace NatGatewayAttachmentStatusMapper {
AWS_NETWORKFIREWALL_API NatGatewayAttachmentStatus GetNatGatewayAttachmentStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForNatGatewayAttachmentStatus(NatGatewayAttachmentStatus value);
}  // namespace NatGatewayAttachmentStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
