/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/CreateSnapshotCopyConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSnapshotCopyConfigurationRequest::CreateSnapshotCopyConfigurationRequest() : 
    m_destinationKmsKeyIdHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false)
{
}

Aws::String CreateSnapshotCopyConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationKmsKeyIdHasBeenSet)
  {
   payload.WithString("destinationKmsKeyId", m_destinationKmsKeyId);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("destinationRegion", m_destinationRegion);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_snapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("snapshotRetentionPeriod", m_snapshotRetentionPeriod);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSnapshotCopyConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.CreateSnapshotCopyConfiguration"));
  return headers;

}




