/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/UpdateRecommenderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecommenderRequest::UpdateRecommenderRequest() : 
    m_recommenderArnHasBeenSet(false),
    m_recommenderConfigHasBeenSet(false)
{
}

Aws::String UpdateRecommenderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommenderArnHasBeenSet)
  {
   payload.WithString("recommenderArn", m_recommenderArn);

  }

  if(m_recommenderConfigHasBeenSet)
  {
   payload.WithObject("recommenderConfig", m_recommenderConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRecommenderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.UpdateRecommender"));
  return headers;

}




