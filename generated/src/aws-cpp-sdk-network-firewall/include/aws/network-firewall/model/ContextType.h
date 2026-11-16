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
enum class ContextType { NOT_SET, ResourceId, SegmentId, Subnet, Attachment };

namespace ContextTypeMapper {
AWS_NETWORKFIREWALL_API ContextType GetContextTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForContextType(ContextType value);
}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
