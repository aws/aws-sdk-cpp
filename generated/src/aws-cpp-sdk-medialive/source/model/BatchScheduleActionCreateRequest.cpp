/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchScheduleActionCreateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BatchScheduleActionCreateRequest::BatchScheduleActionCreateRequest() : 
    m_scheduleActionsHasBeenSet(false)
{
}

BatchScheduleActionCreateRequest::BatchScheduleActionCreateRequest(JsonView jsonValue) : 
    m_scheduleActionsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchScheduleActionCreateRequest& BatchScheduleActionCreateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduleActions"))
  {
    Aws::Utils::Array<JsonView> scheduleActionsJsonList = jsonValue.GetArray("scheduleActions");
    for(unsigned scheduleActionsIndex = 0; scheduleActionsIndex < scheduleActionsJsonList.GetLength(); ++scheduleActionsIndex)
    {
      m_scheduleActions.push_back(scheduleActionsJsonList[scheduleActionsIndex].AsObject());
    }
    m_scheduleActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchScheduleActionCreateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduleActionsJsonList(m_scheduleActions.size());
   for(unsigned scheduleActionsIndex = 0; scheduleActionsIndex < scheduleActionsJsonList.GetLength(); ++scheduleActionsIndex)
   {
     scheduleActionsJsonList[scheduleActionsIndex].AsObject(m_scheduleActions[scheduleActionsIndex].Jsonize());
   }
   payload.WithArray("scheduleActions", std::move(scheduleActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
