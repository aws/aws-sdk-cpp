/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetRotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRotationRequest::GetRotationRequest() : 
    m_rotationIdHasBeenSet(false)
{
}

Aws::String GetRotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationIdHasBeenSet)
  {
   payload.WithString("RotationId", m_rotationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.GetRotation"));
  return headers;

}




