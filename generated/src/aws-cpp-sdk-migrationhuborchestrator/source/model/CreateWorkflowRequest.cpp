/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/CreateWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkflowRequest::CreateWorkflowRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_applicationConfigurationIdHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_stepTargetsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  if(m_applicationConfigurationIdHasBeenSet)
  {
   payload.WithString("applicationConfigurationId", m_applicationConfigurationId);

  }

  if(m_inputParametersHasBeenSet)
  {
   JsonValue inputParametersJsonMap;
   for(auto& inputParametersItem : m_inputParameters)
   {
     inputParametersJsonMap.WithObject(inputParametersItem.first, inputParametersItem.second.Jsonize());
   }
   payload.WithObject("inputParameters", std::move(inputParametersJsonMap));

  }

  if(m_stepTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepTargetsJsonList(m_stepTargets.size());
   for(unsigned stepTargetsIndex = 0; stepTargetsIndex < stepTargetsJsonList.GetLength(); ++stepTargetsIndex)
   {
     stepTargetsJsonList[stepTargetsIndex].AsString(m_stepTargets[stepTargetsIndex]);
   }
   payload.WithArray("stepTargets", std::move(stepTargetsJsonList));

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




