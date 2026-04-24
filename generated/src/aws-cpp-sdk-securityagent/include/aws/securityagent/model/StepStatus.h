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
enum class StepStatus { NOT_SET, NOT_STARTED, IN_PROGRESS, COMPLETED, FAILED, STOPPED };

namespace StepStatusMapper {
AWS_SECURITYAGENT_API StepStatus GetStepStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForStepStatus(StepStatus value);
}  // namespace StepStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
