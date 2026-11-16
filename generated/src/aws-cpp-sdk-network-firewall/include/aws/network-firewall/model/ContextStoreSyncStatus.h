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
enum class ContextStoreSyncStatus { NOT_SET, SYNCING, PARTIALLY_RESOLVED, FULLY_RESOLVED, SYNC_FAILED, UNRESOLVED };

namespace ContextStoreSyncStatusMapper {
AWS_NETWORKFIREWALL_API ContextStoreSyncStatus GetContextStoreSyncStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForContextStoreSyncStatus(ContextStoreSyncStatus value);
}  // namespace ContextStoreSyncStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
