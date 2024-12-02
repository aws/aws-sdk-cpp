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
  enum class QueryStatus
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    SUCCEEDED,
    FAILED,
    CANCELED
  };

namespace QueryStatusMapper
{
AWS_NETWORKFLOWMONITOR_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForQueryStatus(QueryStatus value);
} // namespace QueryStatusMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
