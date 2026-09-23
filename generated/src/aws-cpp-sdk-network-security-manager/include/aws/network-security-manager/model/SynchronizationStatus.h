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
enum class SynchronizationStatus { NOT_SET, IN_SYNC, OUT_OF_SYNC, NOT_APPLICABLE };

namespace SynchronizationStatusMapper {
AWS_NETWORKSECURITYMANAGER_API SynchronizationStatus GetSynchronizationStatusForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForSynchronizationStatus(SynchronizationStatus value);
}  // namespace SynchronizationStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
