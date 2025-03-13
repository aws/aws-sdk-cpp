/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/UpdateSolutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSolutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  if(m_performAutoTrainingHasBeenSet)
  {
   payload.WithBool("performAutoTraining", m_performAutoTraining);

  }

  if(m_solutionUpdateConfigHasBeenSet)
  {
   payload.WithObject("solutionUpdateConfig", m_solutionUpdateConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSolutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.UpdateSolution"));
  return headers;

}




