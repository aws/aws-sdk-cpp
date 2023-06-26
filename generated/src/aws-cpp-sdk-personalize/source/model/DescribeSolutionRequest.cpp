/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeSolutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSolutionRequest::DescribeSolutionRequest() : 
    m_solutionArnHasBeenSet(false)
{
}

Aws::String DescribeSolutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSolutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeSolution"));
  return headers;

}




