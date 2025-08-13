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

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

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

  if(m_participantTypeHasBeenSet)
  {
   payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(InvitationStatusMapper::GetNameForInvitationStatus(m_status[statusIndex]));
   }
   payload.WithArray("Status", std::move(statusJsonList));

  }

  if(m_engagementIdentifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engagementIdentifierJsonList(m_engagementIdentifier.size());
   for(unsigned engagementIdentifierIndex = 0; engagementIdentifierIndex < engagementIdentifierJsonList.GetLength(); ++engagementIdentifierIndex)
   {
     engagementIdentifierJsonList[engagementIdentifierIndex].AsString(m_engagementIdentifier[engagementIdentifierIndex]);
   }
   payload.WithArray("EngagementIdentifier", std::move(engagementIdentifierJsonList));

  }

  if(m_senderAwsAccountIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> senderAwsAccountIdJsonList(m_senderAwsAccountId.size());
   for(unsigned senderAwsAccountIdIndex = 0; senderAwsAccountIdIndex < senderAwsAccountIdJsonList.GetLength(); ++senderAwsAccountIdIndex)
   {
     senderAwsAccountIdJsonList[senderAwsAccountIdIndex].AsString(m_senderAwsAccountId[senderAwsAccountIdIndex]);
   }
   payload.WithArray("SenderAwsAccountId", std::move(senderAwsAccountIdJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementInvitationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagementInvitations"));
  return headers;

}




