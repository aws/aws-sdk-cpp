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
enum class ThreatSeverity { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW, INFO };

namespace ThreatSeverityMapper {
AWS_SECURITYAGENT_API ThreatSeverity GetThreatSeverityForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForThreatSeverity(ThreatSeverity value);
}  // namespace ThreatSeverityMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
