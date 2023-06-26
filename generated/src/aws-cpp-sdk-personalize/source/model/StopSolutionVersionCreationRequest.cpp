/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/StopSolutionVersionCreationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopSolutionVersionCreationRequest::StopSolutionVersionCreationRequest() : 
    m_solutionVersionArnHasBeenSet(false)
{
}

Aws::String StopSolutionVersionCreationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopSolutionVersionCreationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.StopSolutionVersionCreation"));
  return headers;

}




