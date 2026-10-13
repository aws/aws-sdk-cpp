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
enum class DevOpsAgentInvestigationStatus { NOT_SET, PENDING, IN_PROGRESS, COMPLETED, FAILED, TIMED_OUT, CANCELED };

namespace DevOpsAgentInvestigationStatusMapper {
AWS_RESILIENCEHUBV2_API DevOpsAgentInvestigationStatus GetDevOpsAgentInvestigationStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDevOpsAgentInvestigationStatus(DevOpsAgentInvestigationStatus value);
}  // namespace DevOpsAgentInvestigationStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
