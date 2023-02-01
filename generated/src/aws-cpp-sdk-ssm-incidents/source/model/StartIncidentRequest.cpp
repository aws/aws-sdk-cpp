/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/StartIncidentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartIncidentRequest::StartIncidentRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_relatedItemsHasBeenSet(false),
    m_responsePlanArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_triggerDetailsHasBeenSet(false)
{
}

Aws::String StartIncidentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_impactHasBeenSet)
  {
   payload.WithInteger("impact", m_impact);

  }

  if(m_relatedItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedItemsJsonList(m_relatedItems.size());
   for(unsigned relatedItemsIndex = 0; relatedItemsIndex < relatedItemsJsonList.GetLength(); ++relatedItemsIndex)
   {
     relatedItemsJsonList[relatedItemsIndex].AsObject(m_relatedItems[relatedItemsIndex].Jsonize());
   }
   payload.WithArray("relatedItems", std::move(relatedItemsJsonList));

  }

  if(m_responsePlanArnHasBeenSet)
  {
   payload.WithString("responsePlanArn", m_responsePlanArn);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_triggerDetailsHasBeenSet)
  {
   payload.WithObject("triggerDetails", m_triggerDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}




