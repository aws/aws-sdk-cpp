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
enum class ResourceManagedStatus { NOT_SET, MANAGED, ACCOUNT };

namespace ResourceManagedStatusMapper {
AWS_NETWORKFIREWALL_API ResourceManagedStatus GetResourceManagedStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForResourceManagedStatus(ResourceManagedStatus value);
}  // namespace ResourceManagedStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
