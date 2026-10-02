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
enum class TriggerFilterMatchMode { NOT_SET, INCLUDE, EXCLUDE };

namespace TriggerFilterMatchModeMapper {
AWS_SECURITYAGENT_API TriggerFilterMatchMode GetTriggerFilterMatchModeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTriggerFilterMatchMode(TriggerFilterMatchMode value);
}  // namespace TriggerFilterMatchModeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
