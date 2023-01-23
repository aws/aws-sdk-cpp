/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePhoneNumbersRequest::DescribePhoneNumbersRequest() : 
    m_phoneNumberIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribePhoneNumbersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_phoneNumberIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberIdsJsonList(m_phoneNumberIds.size());
   for(unsigned phoneNumberIdsIndex = 0; phoneNumberIdsIndex < phoneNumberIdsJsonList.GetLength(); ++phoneNumberIdsIndex)
   {
     phoneNumberIdsJsonList[phoneNumberIdsIndex].AsString(m_phoneNumberIds[phoneNumberIdsIndex]);
   }
   payload.WithArray("PhoneNumberIds", std::move(phoneNumberIdsJsonList));

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

Aws::Http::HeaderValueCollection DescribePhoneNumbersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribePhoneNumbers"));
  return headers;

}




