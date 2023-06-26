/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSnapshotRequest::GetSnapshotRequest() : 
    m_ownerAccountHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

Aws::String GetSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetSnapshot"));
  return headers;

}




