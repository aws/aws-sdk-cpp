/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/CreateWorkflowStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkflowStepRequest::CreateWorkflowStepRequest() : 
    m_nameHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_stepActionType(StepActionType::NOT_SET),
    m_stepActionTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workflowStepAutomationConfigurationHasBeenSet(false),
    m_stepTargetHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

Aws::String CreateWorkflowStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stepGroupIdHasBeenSet)
  {
   payload.WithString("stepGroupId", m_stepGroupId);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_stepActionTypeHasBeenSet)
  {
   payload.WithString("stepActionType", StepActionTypeMapper::GetNameForStepActionType(m_stepActionType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_workflowStepAutomationConfigurationHasBeenSet)
  {
   payload.WithObject("workflowStepAutomationConfiguration", m_workflowStepAutomationConfiguration.Jsonize());

  }

  if(m_stepTargetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepTargetJsonList(m_stepTarget.size());
   for(unsigned stepTargetIndex = 0; stepTargetIndex < stepTargetJsonList.GetLength(); ++stepTargetIndex)
   {
     stepTargetJsonList[stepTargetIndex].AsString(m_stepTarget[stepTargetIndex]);
   }
   payload.WithArray("stepTarget", std::move(stepTargetJsonList));

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  if(m_previousHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> previousJsonList(m_previous.size());
   for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
   {
     previousJsonList[previousIndex].AsString(m_previous[previousIndex]);
   }
   payload.WithArray("previous", std::move(previousJsonList));

  }

  if(m_nextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextJsonList(m_next.size());
   for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
   {
     nextJsonList[nextIndex].AsString(m_next[nextIndex]);
   }
   payload.WithArray("next", std::move(nextJsonList));

  }

  return payload.View().WriteReadable();
}




