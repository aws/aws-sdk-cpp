/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
enum class ScopeCoverageStatus { NOT_SET, COMPLETE, INCOMPLETE, PENDING, STALE };

namespace ScopeCoverageStatusMapper {
AWS_NETWORKFLOWMONITOR_API ScopeCoverageStatus GetScopeCoverageStatusForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForScopeCoverageStatus(ScopeCoverageStatus value);
}  // namespace ScopeCoverageStatusMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
