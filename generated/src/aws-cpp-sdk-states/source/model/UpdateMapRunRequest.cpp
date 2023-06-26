/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/UpdateMapRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMapRunRequest::UpdateMapRunRequest() : 
    m_mapRunArnHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false),
    m_toleratedFailurePercentage(0.0),
    m_toleratedFailurePercentageHasBeenSet(false),
    m_toleratedFailureCount(0),
    m_toleratedFailureCountHasBeenSet(false)
{
}

Aws::String UpdateMapRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mapRunArnHasBeenSet)
  {
   payload.WithString("mapRunArn", m_mapRunArn);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithInteger("maxConcurrency", m_maxConcurrency);

  }

  if(m_toleratedFailurePercentageHasBeenSet)
  {
   payload.WithDouble("toleratedFailurePercentage", m_toleratedFailurePercentage);

  }

  if(m_toleratedFailureCountHasBeenSet)
  {
   payload.WithInt64("toleratedFailureCount", m_toleratedFailureCount);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMapRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.UpdateMapRun"));
  return headers;

}




