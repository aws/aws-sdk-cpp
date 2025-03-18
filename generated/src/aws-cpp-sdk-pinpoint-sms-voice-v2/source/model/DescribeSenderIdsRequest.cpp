/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeSenderIdsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_senderIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> senderIdsJsonList(m_senderIds.size());
   for(unsigned senderIdsIndex = 0; senderIdsIndex < senderIdsJsonList.GetLength(); ++senderIdsIndex)
   {
     senderIdsJsonList[senderIdsIndex].AsObject(m_senderIds[senderIdsIndex].Jsonize());
   }
   payload.WithArray("SenderIds", std::move(senderIdsJsonList));

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

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", OwnerMapper::GetNameForOwner(m_owner));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSenderIdsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeSenderIds"));
  return headers;

}




