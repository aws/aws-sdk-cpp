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
enum class RiskLevel { NOT_SET, UNKNOWN, INFORMATIONAL, LOW, MEDIUM, HIGH, CRITICAL };

namespace RiskLevelMapper {
AWS_SECURITYAGENT_API RiskLevel GetRiskLevelForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForRiskLevel(RiskLevel value);
}  // namespace RiskLevelMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
