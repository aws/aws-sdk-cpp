/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateServiceSyncBlockerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceSyncBlockerRequest::UpdateServiceSyncBlockerRequest() : 
    m_idHasBeenSet(false),
    m_resolvedReasonHasBeenSet(false)
{
}

Aws::String UpdateServiceSyncBlockerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_resolvedReasonHasBeenSet)
  {
   payload.WithString("resolvedReason", m_resolvedReason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceSyncBlockerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateServiceSyncBlocker"));
  return headers;

}




