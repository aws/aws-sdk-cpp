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
enum class JobType { NOT_SET, FULL, REVALIDATION };

namespace JobTypeMapper {
AWS_SECURITYAGENT_API JobType GetJobTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForJobType(JobType value);
}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
