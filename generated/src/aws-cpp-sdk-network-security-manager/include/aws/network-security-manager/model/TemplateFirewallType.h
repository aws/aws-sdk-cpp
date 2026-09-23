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
enum class TemplateFirewallType { NOT_SET, WAF };

namespace TemplateFirewallTypeMapper {
AWS_NETWORKSECURITYMANAGER_API TemplateFirewallType GetTemplateFirewallTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForTemplateFirewallType(TemplateFirewallType value);
}  // namespace TemplateFirewallTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
