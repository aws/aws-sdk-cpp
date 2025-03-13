/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeOptOutListsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optOutListNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optOutListNamesJsonList(m_optOutListNames.size());
   for(unsigned optOutListNamesIndex = 0; optOutListNamesIndex < optOutListNamesJsonList.GetLength(); ++optOutListNamesIndex)
   {
     optOutListNamesJsonList[optOutListNamesIndex].AsString(m_optOutListNames[optOutListNamesIndex]);
   }
   payload.WithArray("OptOutListNames", std::move(optOutListNamesJsonList));

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

Aws::Http::HeaderValueCollection DescribeOptOutListsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeOptOutLists"));
  return headers;

}




