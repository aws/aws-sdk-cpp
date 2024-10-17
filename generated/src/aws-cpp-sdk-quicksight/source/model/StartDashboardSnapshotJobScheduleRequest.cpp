/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StartDashboardSnapshotJobScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDashboardSnapshotJobScheduleRequest::StartDashboardSnapshotJobScheduleRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_scheduleIdHasBeenSet(false)
{
}

Aws::String StartDashboardSnapshotJobScheduleRequest::SerializePayload() const
{
  return {};
}




