/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateResourceDataSyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceDataSyncRequest::UpdateResourceDataSyncRequest() : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_syncSourceHasBeenSet(false)
{
}

Aws::String UpdateResourceDataSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", m_syncType);

  }

  if(m_syncSourceHasBeenSet)
  {
   payload.WithObject("SyncSource", m_syncSource.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResourceDataSyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateResourceDataSync"));
  return headers;

}




