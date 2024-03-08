/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeVerifiedDestinationNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVerifiedDestinationNumbersRequest::DescribeVerifiedDestinationNumbersRequest() : 
    m_verifiedDestinationNumberIdsHasBeenSet(false),
    m_destinationPhoneNumbersHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeVerifiedDestinationNumbersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verifiedDestinationNumberIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> verifiedDestinationNumberIdsJsonList(m_verifiedDestinationNumberIds.size());
   for(unsigned verifiedDestinationNumberIdsIndex = 0; verifiedDestinationNumberIdsIndex < verifiedDestinationNumberIdsJsonList.GetLength(); ++verifiedDestinationNumberIdsIndex)
   {
     verifiedDestinationNumberIdsJsonList[verifiedDestinationNumberIdsIndex].AsString(m_verifiedDestinationNumberIds[verifiedDestinationNumberIdsIndex]);
   }
   payload.WithArray("VerifiedDestinationNumberIds", std::move(verifiedDestinationNumberIdsJsonList));

  }

  if(m_destinationPhoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPhoneNumbersJsonList(m_destinationPhoneNumbers.size());
   for(unsigned destinationPhoneNumbersIndex = 0; destinationPhoneNumbersIndex < destinationPhoneNumbersJsonList.GetLength(); ++destinationPhoneNumbersIndex)
   {
     destinationPhoneNumbersJsonList[destinationPhoneNumbersIndex].AsString(m_destinationPhoneNumbers[destinationPhoneNumbersIndex]);
   }
   payload.WithArray("DestinationPhoneNumbers", std::move(destinationPhoneNumbersJsonList));

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

Aws::Http::HeaderValueCollection DescribeVerifiedDestinationNumbersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeVerifiedDestinationNumbers"));
  return headers;

}




