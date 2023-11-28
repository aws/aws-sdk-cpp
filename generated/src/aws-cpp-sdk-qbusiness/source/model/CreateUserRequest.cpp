/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_applicationIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_userAliasesHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_userAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAliasesJsonList(m_userAliases.size());
   for(unsigned userAliasesIndex = 0; userAliasesIndex < userAliasesJsonList.GetLength(); ++userAliasesIndex)
   {
     userAliasesJsonList[userAliasesIndex].AsObject(m_userAliases[userAliasesIndex].Jsonize());
   }
   payload.WithArray("userAliases", std::move(userAliasesJsonList));

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload.View().WriteReadable();
}




