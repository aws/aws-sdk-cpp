/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/CreateStateMachineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStateMachineRequest::CreateStateMachineRequest() : 
    m_nameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_type(StateMachineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tracingConfigurationHasBeenSet(false)
{
}

Aws::String CreateStateMachineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StateMachineTypeMapper::GetNameForStateMachineType(m_type));
  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("loggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_tracingConfigurationHasBeenSet)
  {
   payload.WithObject("tracingConfiguration", m_tracingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStateMachineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.CreateStateMachine"));
  return headers;

}




