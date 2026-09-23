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
enum class EntityStatus { NOT_SET, DRAFT, ACTIVE, DISABLED };

namespace EntityStatusMapper {
AWS_NETWORKSECURITYMANAGER_API EntityStatus GetEntityStatusForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForEntityStatus(EntityStatus value);
}  // namespace EntityStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
