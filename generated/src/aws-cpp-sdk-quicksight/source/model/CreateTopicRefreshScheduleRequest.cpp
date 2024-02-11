/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateTopicRefreshScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTopicRefreshScheduleRequest::CreateTopicRefreshScheduleRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_refreshScheduleHasBeenSet(false)
{
}

Aws::String CreateTopicRefreshScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_refreshScheduleHasBeenSet)
  {
   payload.WithObject("RefreshSchedule", m_refreshSchedule.Jsonize());

  }

  return payload.View().WriteReadable();
}




