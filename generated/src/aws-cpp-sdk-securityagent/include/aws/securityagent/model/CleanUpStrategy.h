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
enum class CleanUpStrategy { NOT_SET, BEST_EFFORT_DELETE, RETAIN_ALL };

namespace CleanUpStrategyMapper {
AWS_SECURITYAGENT_API CleanUpStrategy GetCleanUpStrategyForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForCleanUpStrategy(CleanUpStrategy value);
}  // namespace CleanUpStrategyMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
