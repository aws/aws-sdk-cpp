/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/DeleteSnapshotCopyConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSnapshotCopyConfigurationRequest::DeleteSnapshotCopyConfigurationRequest() : 
    m_snapshotCopyConfigurationIdHasBeenSet(false)
{
}

Aws::String DeleteSnapshotCopyConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotCopyConfigurationIdHasBeenSet)
  {
   payload.WithString("snapshotCopyConfigurationId", m_snapshotCopyConfigurationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSnapshotCopyConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.DeleteSnapshotCopyConfiguration"));
  return headers;

}




