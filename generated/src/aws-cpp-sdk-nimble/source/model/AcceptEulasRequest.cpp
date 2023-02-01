/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/AcceptEulasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptEulasRequest::AcceptEulasRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_eulaIdsHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String AcceptEulasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eulaIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eulaIdsJsonList(m_eulaIds.size());
   for(unsigned eulaIdsIndex = 0; eulaIdsIndex < eulaIdsJsonList.GetLength(); ++eulaIdsIndex)
   {
     eulaIdsJsonList[eulaIdsIndex].AsString(m_eulaIds[eulaIdsIndex]);
   }
   payload.WithArray("eulaIds", std::move(eulaIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptEulasRequest::GetRequestSpecificHeaders() const
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




