﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeRecommenderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRecommenderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommenderArnHasBeenSet)
  {
   payload.WithString("recommenderArn", m_recommenderArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRecommenderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeRecommender"));
  return headers;

}




