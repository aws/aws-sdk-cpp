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
enum class EntityStatusFilter { NOT_SET, ACTIVE, DRAFT, DISABLED };

namespace EntityStatusFilterMapper {
AWS_NETWORKSECURITYMANAGER_API EntityStatusFilter GetEntityStatusFilterForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForEntityStatusFilter(EntityStatusFilter value);
}  // namespace EntityStatusFilterMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
