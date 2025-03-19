/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TestStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TestStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_inspectionLevelHasBeenSet)
  {
   payload.WithString("inspectionLevel", InspectionLevelMapper::GetNameForInspectionLevel(m_inspectionLevel));
  }

  if(m_revealSecretsHasBeenSet)
  {
   payload.WithBool("revealSecrets", m_revealSecrets);

  }

  if(m_variablesHasBeenSet)
  {
   payload.WithString("variables", m_variables);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.TestState"));
  return headers;

}




