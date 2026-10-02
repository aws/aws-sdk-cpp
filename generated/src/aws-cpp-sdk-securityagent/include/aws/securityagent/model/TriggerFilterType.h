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
enum class TriggerFilterType { NOT_SET, TARGET_BRANCH, LABEL };

namespace TriggerFilterTypeMapper {
AWS_SECURITYAGENT_API TriggerFilterType GetTriggerFilterTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTriggerFilterType(TriggerFilterType value);
}  // namespace TriggerFilterTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
