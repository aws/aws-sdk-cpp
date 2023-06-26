/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/StopRecommenderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopRecommenderRequest::StopRecommenderRequest() : 
    m_recommenderArnHasBeenSet(false)
{
}

Aws::String StopRecommenderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommenderArnHasBeenSet)
  {
   payload.WithString("recommenderArn", m_recommenderArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopRecommenderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.StopRecommender"));
  return headers;

}




