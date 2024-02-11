/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/CreateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppRequest::CreateAppRequest() : 
    m_assessmentSchedule(AppAssessmentScheduleType::NOT_SET),
    m_assessmentScheduleHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionModelHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentScheduleHasBeenSet)
  {
   payload.WithString("assessmentSchedule", AppAssessmentScheduleTypeMapper::GetNameForAppAssessmentScheduleType(m_assessmentSchedule));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventSubscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventSubscriptionsJsonList(m_eventSubscriptions.size());
   for(unsigned eventSubscriptionsIndex = 0; eventSubscriptionsIndex < eventSubscriptionsJsonList.GetLength(); ++eventSubscriptionsIndex)
   {
     eventSubscriptionsJsonList[eventSubscriptionsIndex].AsObject(m_eventSubscriptions[eventSubscriptionsIndex].Jsonize());
   }
   payload.WithArray("eventSubscriptions", std::move(eventSubscriptionsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_permissionModelHasBeenSet)
  {
   payload.WithObject("permissionModel", m_permissionModel.Jsonize());

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




