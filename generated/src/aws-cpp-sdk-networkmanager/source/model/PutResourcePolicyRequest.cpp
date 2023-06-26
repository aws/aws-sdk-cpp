/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_policyDocumentHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("PolicyDocument", m_policyDocument);

  }

  return payload.View().WriteReadable();
}




