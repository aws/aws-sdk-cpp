/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StartDashboardSnapshotJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDashboardSnapshotJobRequest::StartDashboardSnapshotJobRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_snapshotJobIdHasBeenSet(false),
    m_userConfigurationHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false)
{
}

Aws::String StartDashboardSnapshotJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotJobIdHasBeenSet)
  {
   payload.WithString("SnapshotJobId", m_snapshotJobId);

  }

  if(m_userConfigurationHasBeenSet)
  {
   payload.WithObject("UserConfiguration", m_userConfiguration.Jsonize());

  }

  if(m_snapshotConfigurationHasBeenSet)
  {
   payload.WithObject("SnapshotConfiguration", m_snapshotConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




