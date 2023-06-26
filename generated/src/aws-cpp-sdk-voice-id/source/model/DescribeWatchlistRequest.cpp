/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/DescribeWatchlistRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWatchlistRequest::DescribeWatchlistRequest() : 
    m_domainIdHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
{
}

Aws::String DescribeWatchlistRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_watchlistIdHasBeenSet)
  {
   payload.WithString("WatchlistId", m_watchlistId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWatchlistRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.DescribeWatchlist"));
  return headers;

}




