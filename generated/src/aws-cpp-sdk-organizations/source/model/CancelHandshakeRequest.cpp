/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CancelHandshakeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelHandshakeRequest::CancelHandshakeRequest() : 
    m_handshakeIdHasBeenSet(false)
{
}

Aws::String CancelHandshakeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_handshakeIdHasBeenSet)
  {
   payload.WithString("HandshakeId", m_handshakeId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelHandshakeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CancelHandshake"));
  return headers;

}




