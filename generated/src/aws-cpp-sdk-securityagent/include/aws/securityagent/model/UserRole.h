/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class UserRole { NOT_SET, MEMBER };

namespace UserRoleMapper {
AWS_SECURITYAGENT_API UserRole GetUserRoleForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForUserRole(UserRole value);
}  // namespace UserRoleMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
