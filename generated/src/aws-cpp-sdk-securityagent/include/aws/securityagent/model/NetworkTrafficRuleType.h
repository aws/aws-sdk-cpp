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
enum class NetworkTrafficRuleType { NOT_SET, URL };

namespace NetworkTrafficRuleTypeMapper {
AWS_SECURITYAGENT_API NetworkTrafficRuleType GetNetworkTrafficRuleTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForNetworkTrafficRuleType(NetworkTrafficRuleType value);
}  // namespace NetworkTrafficRuleTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
