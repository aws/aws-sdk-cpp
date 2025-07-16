/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{
  enum class ScopeStatus
  {
    NOT_SET,
    SUCCEEDED,
    IN_PROGRESS,
    FAILED,
    DEACTIVATING,
    DEACTIVATED
  };

namespace ScopeStatusMapper
{
AWS_NETWORKFLOWMONITOR_API ScopeStatus GetScopeStatusForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForScopeStatus(ScopeStatus value);
} // namespace ScopeStatusMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
