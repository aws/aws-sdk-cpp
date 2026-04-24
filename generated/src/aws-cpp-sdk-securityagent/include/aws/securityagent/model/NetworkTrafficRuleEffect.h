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
enum class NetworkTrafficRuleEffect { NOT_SET, ALLOW, DENY };

namespace NetworkTrafficRuleEffectMapper {
AWS_SECURITYAGENT_API NetworkTrafficRuleEffect GetNetworkTrafficRuleEffectForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForNetworkTrafficRuleEffect(NetworkTrafficRuleEffect value);
}  // namespace NetworkTrafficRuleEffectMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
