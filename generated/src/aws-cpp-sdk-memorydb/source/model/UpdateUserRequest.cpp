/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_userNameHasBeenSet(false),
    m_authenticationModeHasBeenSet(false),
    m_accessStringHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_authenticationModeHasBeenSet)
  {
   payload.WithObject("AuthenticationMode", m_authenticationMode.Jsonize());

  }

  if(m_accessStringHasBeenSet)
  {
   payload.WithString("AccessString", m_accessString);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.UpdateUser"));
  return headers;

}




