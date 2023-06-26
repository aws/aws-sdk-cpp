/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateTopicRefreshScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTopicRefreshScheduleRequest::UpdateTopicRefreshScheduleRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_datasetIdHasBeenSet(false),
    m_refreshScheduleHasBeenSet(false)
{
}

Aws::String UpdateTopicRefreshScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_refreshScheduleHasBeenSet)
  {
   payload.WithObject("RefreshSchedule", m_refreshSchedule.Jsonize());

  }

  return payload.View().WriteReadable();
}




