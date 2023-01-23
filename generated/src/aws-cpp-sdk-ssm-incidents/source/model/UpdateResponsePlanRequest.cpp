/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateResponsePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResponsePlanRequest::UpdateResponsePlanRequest() : 
    m_actionsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_chatChannelHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_displayNameHasBeenSet(false),
    m_engagementsHasBeenSet(false),
    m_incidentTemplateDedupeStringHasBeenSet(false),
    m_incidentTemplateImpact(0),
    m_incidentTemplateImpactHasBeenSet(false),
    m_incidentTemplateNotificationTargetsHasBeenSet(false),
    m_incidentTemplateSummaryHasBeenSet(false),
    m_incidentTemplateTagsHasBeenSet(false),
    m_incidentTemplateTitleHasBeenSet(false),
    m_integrationsHasBeenSet(false)
{
}

Aws::String UpdateResponsePlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

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

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_engagementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engagementsJsonList(m_engagements.size());
   for(unsigned engagementsIndex = 0; engagementsIndex < engagementsJsonList.GetLength(); ++engagementsIndex)
   {
     engagementsJsonList[engagementsIndex].AsString(m_engagements[engagementsIndex]);
   }
   payload.WithArray("engagements", std::move(engagementsJsonList));

  }

  if(m_incidentTemplateDedupeStringHasBeenSet)
  {
   payload.WithString("incidentTemplateDedupeString", m_incidentTemplateDedupeString);

  }

  if(m_incidentTemplateImpactHasBeenSet)
  {
   payload.WithInteger("incidentTemplateImpact", m_incidentTemplateImpact);

  }

  if(m_incidentTemplateNotificationTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incidentTemplateNotificationTargetsJsonList(m_incidentTemplateNotificationTargets.size());
   for(unsigned incidentTemplateNotificationTargetsIndex = 0; incidentTemplateNotificationTargetsIndex < incidentTemplateNotificationTargetsJsonList.GetLength(); ++incidentTemplateNotificationTargetsIndex)
   {
     incidentTemplateNotificationTargetsJsonList[incidentTemplateNotificationTargetsIndex].AsObject(m_incidentTemplateNotificationTargets[incidentTemplateNotificationTargetsIndex].Jsonize());
   }
   payload.WithArray("incidentTemplateNotificationTargets", std::move(incidentTemplateNotificationTargetsJsonList));

  }

  if(m_incidentTemplateSummaryHasBeenSet)
  {
   payload.WithString("incidentTemplateSummary", m_incidentTemplateSummary);

  }

  if(m_incidentTemplateTagsHasBeenSet)
  {
   JsonValue incidentTemplateTagsJsonMap;
   for(auto& incidentTemplateTagsItem : m_incidentTemplateTags)
   {
     incidentTemplateTagsJsonMap.WithString(incidentTemplateTagsItem.first, incidentTemplateTagsItem.second);
   }
   payload.WithObject("incidentTemplateTags", std::move(incidentTemplateTagsJsonMap));

  }

  if(m_incidentTemplateTitleHasBeenSet)
  {
   payload.WithString("incidentTemplateTitle", m_incidentTemplateTitle);

  }

  if(m_integrationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integrationsJsonList(m_integrations.size());
   for(unsigned integrationsIndex = 0; integrationsIndex < integrationsJsonList.GetLength(); ++integrationsIndex)
   {
     integrationsJsonList[integrationsIndex].AsObject(m_integrations[integrationsIndex].Jsonize());
   }
   payload.WithArray("integrations", std::move(integrationsJsonList));

  }

  return payload.View().WriteReadable();
}




