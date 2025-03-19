/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardsQAConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDashboardsQAConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardsQAStatusHasBeenSet)
  {
   payload.WithString("DashboardsQAStatus", DashboardsQAStatusMapper::GetNameForDashboardsQAStatus(m_dashboardsQAStatus));
  }

  return payload.View().WriteReadable();
}




