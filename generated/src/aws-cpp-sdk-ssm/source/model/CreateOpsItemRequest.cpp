/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateOpsItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOpsItemRequest::CreateOpsItemRequest() : 
    m_descriptionHasBeenSet(false),
    m_opsItemTypeHasBeenSet(false),
    m_operationalDataHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_relatedOpsItemsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_actualStartTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false),
    m_plannedStartTimeHasBeenSet(false),
    m_plannedEndTimeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String CreateOpsItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_opsItemTypeHasBeenSet)
  {
   payload.WithString("OpsItemType", m_opsItemType);

  }

  if(m_operationalDataHasBeenSet)
  {
   JsonValue operationalDataJsonMap;
   for(auto& operationalDataItem : m_operationalData)
   {
     operationalDataJsonMap.WithObject(operationalDataItem.first, operationalDataItem.second.Jsonize());
   }
   payload.WithObject("OperationalData", std::move(operationalDataJsonMap));

  }

  if(m_notificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationsJsonList(m_notifications.size());
   for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
   {
     notificationsJsonList[notificationsIndex].AsObject(m_notifications[notificationsIndex].Jsonize());
   }
   payload.WithArray("Notifications", std::move(notificationsJsonList));

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_relatedOpsItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedOpsItemsJsonList(m_relatedOpsItems.size());
   for(unsigned relatedOpsItemsIndex = 0; relatedOpsItemsIndex < relatedOpsItemsJsonList.GetLength(); ++relatedOpsItemsIndex)
   {
     relatedOpsItemsJsonList[relatedOpsItemsIndex].AsObject(m_relatedOpsItems[relatedOpsItemsIndex].Jsonize());
   }
   payload.WithArray("RelatedOpsItems", std::move(relatedOpsItemsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_actualStartTimeHasBeenSet)
  {
   payload.WithDouble("ActualStartTime", m_actualStartTime.SecondsWithMSPrecision());
  }

  if(m_actualEndTimeHasBeenSet)
  {
   payload.WithDouble("ActualEndTime", m_actualEndTime.SecondsWithMSPrecision());
  }

  if(m_plannedStartTimeHasBeenSet)
  {
   payload.WithDouble("PlannedStartTime", m_plannedStartTime.SecondsWithMSPrecision());
  }

  if(m_plannedEndTimeHasBeenSet)
  {
   payload.WithDouble("PlannedEndTime", m_plannedEndTime.SecondsWithMSPrecision());
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOpsItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateOpsItem"));
  return headers;

}




