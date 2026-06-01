/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class AgentStatus { NOT_SET, ACTIVE, UPDATING, FAILED, CREATING };

namespace AgentStatusMapper {
AWS_QUICKSIGHT_API AgentStatus GetAgentStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAgentStatus(AgentStatus value);
}  // namespace AgentStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
