/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class DevOpsAgentConfidence { NOT_SET, HIGH, MEDIUM, LOW };

namespace DevOpsAgentConfidenceMapper {
AWS_RESILIENCEHUBV2_API DevOpsAgentConfidence GetDevOpsAgentConfidenceForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDevOpsAgentConfidence(DevOpsAgentConfidence value);
}  // namespace DevOpsAgentConfidenceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
