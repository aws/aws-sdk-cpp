/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementInvitationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEngagementInvitationsRequest::ListEngagementInvitationsRequest() : 
    m_catalogHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_participantType(ParticipantType::NOT_SET),
    m_participantTypeHasBeenSet(false),
    m_payloadTypeHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

Aws::String ListEngagementInvitationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_participantTypeHasBeenSet)
  {
   payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if(m_payloadTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> payloadTypeJsonList(m_payloadType.size());
   for(unsigned payloadTypeIndex = 0; payloadTypeIndex < payloadTypeJsonList.GetLength(); ++payloadTypeIndex)
   {
     payloadTypeJsonList[payloadTypeIndex].AsString(EngagementInvitationPayloadTypeMapper::GetNameForEngagementInvitationPayloadType(m_payloadType[payloadTypeIndex]));
   }
   payload.WithArray("PayloadType", std::move(payloadTypeJsonList));

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementInvitationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagementInvitations"));
  return headers;

}




