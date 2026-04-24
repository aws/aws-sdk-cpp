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
enum class FindingStatus { NOT_SET, ACTIVE, RESOLVED, ACCEPTED, FALSE_POSITIVE };

namespace FindingStatusMapper {
AWS_SECURITYAGENT_API FindingStatus GetFindingStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForFindingStatus(FindingStatus value);
}  // namespace FindingStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
