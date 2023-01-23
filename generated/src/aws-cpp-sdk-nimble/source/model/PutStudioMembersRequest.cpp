/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/PutStudioMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutStudioMembersRequest::PutStudioMembersRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_identityStoreIdHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String PutStudioMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("identityStoreId", m_identityStoreId);

  }

  if(m_membersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsObject(m_members[membersIndex].Jsonize());
   }
   payload.WithArray("members", std::move(membersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutStudioMembersRequest::GetRequestSpecificHeaders() const
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




