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
enum class ResourceType { NOT_SET, SecurityGroup, VPC, Subnet, TGWAttachment };

namespace ResourceTypeMapper {
AWS_NETWORKFIREWALL_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
