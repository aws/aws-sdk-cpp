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
enum class ConfidenceLevel { NOT_SET, FALSE_POSITIVE, UNCONFIRMED, LOW, MEDIUM, HIGH };

namespace ConfidenceLevelMapper {
AWS_SECURITYAGENT_API ConfidenceLevel GetConfidenceLevelForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForConfidenceLevel(ConfidenceLevel value);
}  // namespace ConfidenceLevelMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
