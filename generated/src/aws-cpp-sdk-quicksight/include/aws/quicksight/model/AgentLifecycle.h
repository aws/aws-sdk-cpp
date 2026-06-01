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
enum class AgentLifecycle { NOT_SET, PREVIEW, PUBLISHED };

namespace AgentLifecycleMapper {
AWS_QUICKSIGHT_API AgentLifecycle GetAgentLifecycleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAgentLifecycle(AgentLifecycle value);
}  // namespace AgentLifecycleMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
