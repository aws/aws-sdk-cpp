/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class WAFConflictResolutionOptions { NOT_SET, MERGE_WHERE_APPLICABLE };

namespace WAFConflictResolutionOptionsMapper {
AWS_NETWORKSECURITYMANAGER_API WAFConflictResolutionOptions GetWAFConflictResolutionOptionsForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForWAFConflictResolutionOptions(WAFConflictResolutionOptions value);
}  // namespace WAFConflictResolutionOptionsMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
