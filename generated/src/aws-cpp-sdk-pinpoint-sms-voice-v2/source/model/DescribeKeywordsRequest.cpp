﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeKeywordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_keywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keywordsJsonList(m_keywords.size());
   for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
   {
     keywordsJsonList[keywordsIndex].AsString(m_keywords[keywordsIndex]);
   }
   payload.WithArray("Keywords", std::move(keywordsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeKeywordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeKeywords"));
  return headers;

}




