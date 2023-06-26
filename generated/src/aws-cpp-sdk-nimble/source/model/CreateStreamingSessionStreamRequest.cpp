/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/CreateStreamingSessionStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStreamingSessionStreamRequest::CreateStreamingSessionStreamRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_expirationInSeconds(0),
    m_expirationInSecondsHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String CreateStreamingSessionStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_expirationInSecondsHasBeenSet)
  {
   payload.WithInteger("expirationInSeconds", m_expirationInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStreamingSessionStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




