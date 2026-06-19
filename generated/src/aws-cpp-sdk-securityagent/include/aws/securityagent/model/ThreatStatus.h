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
enum class ThreatStatus { NOT_SET, OPEN, RESOLVED, DISMISSED };

namespace ThreatStatusMapper {
AWS_SECURITYAGENT_API ThreatStatus GetThreatStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForThreatStatus(ThreatStatus value);
}  // namespace ThreatStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
