/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateChatControlsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChatControlsConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_responseScopeHasBeenSet)
  {
   payload.WithString("responseScope", ResponseScopeMapper::GetNameForResponseScope(m_responseScope));
  }

  if(m_orchestrationConfigurationHasBeenSet)
  {
   payload.WithObject("orchestrationConfiguration", m_orchestrationConfiguration.Jsonize());

  }

  if(m_blockedPhrasesConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("blockedPhrasesConfigurationUpdate", m_blockedPhrasesConfigurationUpdate.Jsonize());

  }

  if(m_topicConfigurationsToCreateOrUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicConfigurationsToCreateOrUpdateJsonList(m_topicConfigurationsToCreateOrUpdate.size());
   for(unsigned topicConfigurationsToCreateOrUpdateIndex = 0; topicConfigurationsToCreateOrUpdateIndex < topicConfigurationsToCreateOrUpdateJsonList.GetLength(); ++topicConfigurationsToCreateOrUpdateIndex)
   {
     topicConfigurationsToCreateOrUpdateJsonList[topicConfigurationsToCreateOrUpdateIndex].AsObject(m_topicConfigurationsToCreateOrUpdate[topicConfigurationsToCreateOrUpdateIndex].Jsonize());
   }
   payload.WithArray("topicConfigurationsToCreateOrUpdate", std::move(topicConfigurationsToCreateOrUpdateJsonList));

  }

  if(m_topicConfigurationsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicConfigurationsToDeleteJsonList(m_topicConfigurationsToDelete.size());
   for(unsigned topicConfigurationsToDeleteIndex = 0; topicConfigurationsToDeleteIndex < topicConfigurationsToDeleteJsonList.GetLength(); ++topicConfigurationsToDeleteIndex)
   {
     topicConfigurationsToDeleteJsonList[topicConfigurationsToDeleteIndex].AsObject(m_topicConfigurationsToDelete[topicConfigurationsToDeleteIndex].Jsonize());
   }
   payload.WithArray("topicConfigurationsToDelete", std::move(topicConfigurationsToDeleteJsonList));

  }

  if(m_creatorModeConfigurationHasBeenSet)
  {
   payload.WithObject("creatorModeConfiguration", m_creatorModeConfiguration.Jsonize());

  }

  if(m_hallucinationReductionConfigurationHasBeenSet)
  {
   payload.WithObject("hallucinationReductionConfiguration", m_hallucinationReductionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




