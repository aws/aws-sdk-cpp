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
enum class TemplateOwner { NOT_SET, CUSTOMER, AWS };

namespace TemplateOwnerMapper {
AWS_NETWORKSECURITYMANAGER_API TemplateOwner GetTemplateOwnerForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForTemplateOwner(TemplateOwner value);
}  // namespace TemplateOwnerMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
