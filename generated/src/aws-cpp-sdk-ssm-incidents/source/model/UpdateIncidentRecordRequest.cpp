/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateIncidentRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIncidentRecordRequest::UpdateIncidentRecordRequest() : 
    m_arnHasBeenSet(false),
    m_chatChannelHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_notificationTargetsHasBeenSet(false),
    m_status(IncidentRecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

Aws::String UpdateIncidentRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_chatChannelHasBeenSet)
  {
   payload.WithObject("chatChannel", m_chatChannel.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_impactHasBeenSet)
  {
   payload.WithInteger("impact", m_impact);

  }

  if(m_notificationTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationTargetsJsonList(m_notificationTargets.size());
   for(unsigned notificationTargetsIndex = 0; notificationTargetsIndex < notificationTargetsJsonList.GetLength(); ++notificationTargetsIndex)
   {
     notificationTargetsJsonList[notificationTargetsIndex].AsObject(m_notificationTargets[notificationTargetsIndex].Jsonize());
   }
   payload.WithArray("notificationTargets", std::move(notificationTargetsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IncidentRecordStatusMapper::GetNameForIncidentRecordStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload.View().WriteReadable();
}




