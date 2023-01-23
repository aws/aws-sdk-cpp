/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteActivationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteActivationRequest::DeleteActivationRequest() : 
    m_activationIdHasBeenSet(false)
{
}

Aws::String DeleteActivationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationIdHasBeenSet)
  {
   payload.WithString("ActivationId", m_activationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteActivationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteActivation"));
  return headers;

}




