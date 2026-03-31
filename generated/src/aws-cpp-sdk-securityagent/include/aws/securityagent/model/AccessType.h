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
enum class AccessType { NOT_SET, PRIVATE_, PUBLIC_ };

namespace AccessTypeMapper {
AWS_SECURITYAGENT_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForAccessType(AccessType value);
}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
