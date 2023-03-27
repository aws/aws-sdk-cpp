/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/DisassociateFraudsterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateFraudsterRequest::DisassociateFraudsterRequest() : 
    m_domainIdHasBeenSet(false),
    m_fraudsterIdHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
{
}

Aws::String DisassociateFraudsterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_fraudsterIdHasBeenSet)
  {
   payload.WithString("FraudsterId", m_fraudsterId);

  }

  if(m_watchlistIdHasBeenSet)
  {
   payload.WithString("WatchlistId", m_watchlistId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateFraudsterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.DisassociateFraudster"));
  return headers;

}




