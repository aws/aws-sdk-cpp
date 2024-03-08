/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRegistrationAttachmentsRequest::DescribeRegistrationAttachmentsRequest() : 
    m_registrationAttachmentIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeRegistrationAttachmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationAttachmentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> registrationAttachmentIdsJsonList(m_registrationAttachmentIds.size());
   for(unsigned registrationAttachmentIdsIndex = 0; registrationAttachmentIdsIndex < registrationAttachmentIdsJsonList.GetLength(); ++registrationAttachmentIdsIndex)
   {
     registrationAttachmentIdsJsonList[registrationAttachmentIdsIndex].AsString(m_registrationAttachmentIds[registrationAttachmentIdsIndex]);
   }
   payload.WithArray("RegistrationAttachmentIds", std::move(registrationAttachmentIdsJsonList));

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

Aws::Http::HeaderValueCollection DescribeRegistrationAttachmentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeRegistrationAttachments"));
  return headers;

}




