/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/PutLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLifecyclePolicyRequest::PutLifecyclePolicyRequest() : 
    m_containerNameHasBeenSet(false),
    m_lifecyclePolicyHasBeenSet(false)
{
}

Aws::String PutLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithString("LifecyclePolicy", m_lifecyclePolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLifecyclePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MediaStore_20170901.PutLifecyclePolicy"));
  return headers;

}




