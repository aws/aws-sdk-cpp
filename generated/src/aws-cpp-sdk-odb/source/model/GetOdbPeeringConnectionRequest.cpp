/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/GetOdbPeeringConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetOdbPeeringConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_odbPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("odbPeeringConnectionId", m_odbPeeringConnectionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOdbPeeringConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.GetOdbPeeringConnection"));
  return headers;

}




