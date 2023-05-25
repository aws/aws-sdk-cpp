/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DeleteACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteACLRequest::DeleteACLRequest() : 
    m_aCLNameHasBeenSet(false)
{
}

Aws::String DeleteACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aCLNameHasBeenSet)
  {
   payload.WithString("ACLName", m_aCLName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DeleteACL"));
  return headers;

}




