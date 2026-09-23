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
enum class RuleType { NOT_SET, CONFIGURATION, INSPECTION };

namespace RuleTypeMapper {
AWS_NETWORKSECURITYMANAGER_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForRuleType(RuleType value);
}  // namespace RuleTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
