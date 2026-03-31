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
enum class CodeRemediationStrategy { NOT_SET, AUTOMATIC, DISABLED };

namespace CodeRemediationStrategyMapper {
AWS_SECURITYAGENT_API CodeRemediationStrategy GetCodeRemediationStrategyForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForCodeRemediationStrategy(CodeRemediationStrategy value);
}  // namespace CodeRemediationStrategyMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
