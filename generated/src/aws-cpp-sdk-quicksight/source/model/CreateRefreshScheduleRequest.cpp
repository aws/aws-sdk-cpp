/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateRefreshScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRefreshScheduleRequest::CreateRefreshScheduleRequest() : 
    m_dataSetIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

Aws::String CreateRefreshScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  return payload.View().WriteReadable();
}




