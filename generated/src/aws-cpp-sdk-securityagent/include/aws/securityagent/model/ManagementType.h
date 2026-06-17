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
enum class ManagementType { NOT_SET, AWS_MANAGED, CUSTOMER_MANAGED };

namespace ManagementTypeMapper {
AWS_SECURITYAGENT_API ManagementType GetManagementTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForManagementType(ManagementType value);
}  // namespace ManagementTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
