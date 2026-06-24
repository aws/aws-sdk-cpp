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
enum class PrivateConnectionType { NOT_SET, SERVICE_MANAGED, SELF_MANAGED };

namespace PrivateConnectionTypeMapper {
AWS_SECURITYAGENT_API PrivateConnectionType GetPrivateConnectionTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForPrivateConnectionType(PrivateConnectionType value);
}  // namespace PrivateConnectionTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
