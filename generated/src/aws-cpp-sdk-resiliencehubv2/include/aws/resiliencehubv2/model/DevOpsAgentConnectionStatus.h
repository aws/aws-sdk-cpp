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
enum class DevOpsAgentConnectionStatus { NOT_SET, CONNECTING, CONNECTED, DISCONNECTED, FAILED };

namespace DevOpsAgentConnectionStatusMapper {
AWS_RESILIENCEHUBV2_API DevOpsAgentConnectionStatus GetDevOpsAgentConnectionStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDevOpsAgentConnectionStatus(DevOpsAgentConnectionStatus value);
}  // namespace DevOpsAgentConnectionStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
