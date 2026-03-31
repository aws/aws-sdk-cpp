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
enum class StepName { NOT_SET, PREFLIGHT, STATIC_ANALYSIS, PENTEST, FINALIZING };

namespace StepNameMapper {
AWS_SECURITYAGENT_API StepName GetStepNameForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForStepName(StepName value);
}  // namespace StepNameMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
