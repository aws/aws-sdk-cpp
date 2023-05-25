/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StartStreamingSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartStreamingSessionRequest::StartStreamingSessionRequest() : 
    m_backupIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_sessionIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String StartStreamingSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("backupId", m_backupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartStreamingSessionRequest::GetRequestSpecificHeaders() const
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




