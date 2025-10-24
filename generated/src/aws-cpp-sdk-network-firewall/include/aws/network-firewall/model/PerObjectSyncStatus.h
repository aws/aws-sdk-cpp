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
enum class PerObjectSyncStatus { NOT_SET, PENDING, IN_SYNC, CAPACITY_CONSTRAINED };

namespace PerObjectSyncStatusMapper {
AWS_NETWORKFIREWALL_API PerObjectSyncStatus GetPerObjectSyncStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForPerObjectSyncStatus(PerObjectSyncStatus value);
}  // namespace PerObjectSyncStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
