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
enum class AgentOwnershipFilterAttribute {
  NOT_SET,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
  DIRECT_QUICKSIGHT_SOLE_OWNER,
  AGENT_NAME
};

namespace AgentOwnershipFilterAttributeMapper {
AWS_QUICKSIGHT_API AgentOwnershipFilterAttribute GetAgentOwnershipFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAgentOwnershipFilterAttribute(AgentOwnershipFilterAttribute value);
}  // namespace AgentOwnershipFilterAttributeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
