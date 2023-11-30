/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateSnapshotCopyConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSnapshotCopyConfigurationRequest::UpdateSnapshotCopyConfigurationRequest() : 
    m_snapshotCopyConfigurationIdHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false)
{
}

Aws::String UpdateSnapshotCopyConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snapshotCopyConfigurationIdHasBeenSet)
  {
   payload.WithString("snapshotCopyConfigurationId", m_snapshotCopyConfigurationId);

  }

  if(m_snapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("snapshotRetentionPeriod", m_snapshotRetentionPeriod);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSnapshotCopyConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateSnapshotCopyConfiguration"));
  return headers;

}




