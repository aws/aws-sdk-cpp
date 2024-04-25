/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidateStateMachineDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateStateMachineDefinitionRequest::ValidateStateMachineDefinitionRequest() : 
    m_definitionHasBeenSet(false),
    m_type(StateMachineType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ValidateStateMachineDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StateMachineTypeMapper::GetNameForStateMachineType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ValidateStateMachineDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.ValidateStateMachineDefinition"));
  return headers;

}




