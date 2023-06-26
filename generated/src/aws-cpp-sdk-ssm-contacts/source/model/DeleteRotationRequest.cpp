/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DeleteRotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRotationRequest::DeleteRotationRequest() : 
    m_rotationIdHasBeenSet(false)
{
}

Aws::String DeleteRotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationIdHasBeenSet)
  {
   payload.WithString("RotationId", m_rotationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.DeleteRotation"));
  return headers;

}




