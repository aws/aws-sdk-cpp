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
enum class AdminAccountStatus { NOT_SET, ONBOARDED, OFFBOARDED };

namespace AdminAccountStatusMapper {
AWS_NETWORKSECURITYMANAGER_API AdminAccountStatus GetAdminAccountStatusForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForAdminAccountStatus(AdminAccountStatus value);
}  // namespace AdminAccountStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
