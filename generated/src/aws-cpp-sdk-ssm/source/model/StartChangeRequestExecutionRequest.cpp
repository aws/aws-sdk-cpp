/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StartChangeRequestExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartChangeRequestExecutionRequest::StartChangeRequestExecutionRequest() : 
    m_scheduledTimeHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_changeRequestNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_autoApprove(false),
    m_autoApproveHasBeenSet(false),
    m_runbooksHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_scheduledEndTimeHasBeenSet(false),
    m_changeDetailsHasBeenSet(false)
{
}

Aws::String StartChangeRequestExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledTime", m_scheduledTime.SecondsWithMSPrecision());
  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(parametersItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(parametersItem.second[automationParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_changeRequestNameHasBeenSet)
  {
   payload.WithString("ChangeRequestName", m_changeRequestName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_autoApproveHasBeenSet)
  {
   payload.WithBool("AutoApprove", m_autoApprove);

  }

  if(m_runbooksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runbooksJsonList(m_runbooks.size());
   for(unsigned runbooksIndex = 0; runbooksIndex < runbooksJsonList.GetLength(); ++runbooksIndex)
   {
     runbooksJsonList[runbooksIndex].AsObject(m_runbooks[runbooksIndex].Jsonize());
   }
   payload.WithArray("Runbooks", std::move(runbooksJsonList));

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

  if(m_scheduledEndTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledEndTime", m_scheduledEndTime.SecondsWithMSPrecision());
  }

  if(m_changeDetailsHasBeenSet)
  {
   payload.WithString("ChangeDetails", m_changeDetails);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartChangeRequestExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartChangeRequestExecution"));
  return headers;

}




