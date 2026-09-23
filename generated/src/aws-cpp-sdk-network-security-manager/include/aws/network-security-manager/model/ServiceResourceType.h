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
enum class ServiceResourceType { NOT_SET, Rule, Template, Policy, Deployment, Scope };

namespace ServiceResourceTypeMapper {
AWS_NETWORKSECURITYMANAGER_API ServiceResourceType GetServiceResourceTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForServiceResourceType(ServiceResourceType value);
}  // namespace ServiceResourceTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
