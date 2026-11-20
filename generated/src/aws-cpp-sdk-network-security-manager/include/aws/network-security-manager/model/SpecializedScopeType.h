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
enum class SpecializedScopeType { NOT_SET, IGW_FIREWALL_SUBNET_CONNECTIVITY_OVERRIDE };

namespace SpecializedScopeTypeMapper {
AWS_NETWORKSECURITYMANAGER_API SpecializedScopeType GetSpecializedScopeTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForSpecializedScopeType(SpecializedScopeType value);
}  // namespace SpecializedScopeTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
