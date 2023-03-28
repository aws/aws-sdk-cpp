/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetRotationOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRotationOverrideRequest::GetRotationOverrideRequest() : 
    m_rotationIdHasBeenSet(false),
    m_rotationOverrideIdHasBeenSet(false)
{
}

Aws::String GetRotationOverrideRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationIdHasBeenSet)
  {
   payload.WithString("RotationId", m_rotationId);

  }

  if(m_rotationOverrideIdHasBeenSet)
  {
   payload.WithString("RotationOverrideId", m_rotationOverrideId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRotationOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.GetRotationOverride"));
  return headers;

}




