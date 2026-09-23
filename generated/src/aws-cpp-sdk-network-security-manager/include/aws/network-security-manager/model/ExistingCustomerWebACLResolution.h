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
enum class ExistingCustomerWebACLResolution { NOT_SET, RETROFIT, OVERRIDE_ASSOCIATION, NO_REMEDIATION };

namespace ExistingCustomerWebACLResolutionMapper {
AWS_NETWORKSECURITYMANAGER_API ExistingCustomerWebACLResolution GetExistingCustomerWebACLResolutionForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForExistingCustomerWebACLResolution(ExistingCustomerWebACLResolution value);
}  // namespace ExistingCustomerWebACLResolutionMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
