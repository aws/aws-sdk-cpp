/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/DeleteNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNamespaceRequest::DeleteNamespaceRequest() : 
    m_finalSnapshotNameHasBeenSet(false),
    m_finalSnapshotRetentionPeriod(0),
    m_finalSnapshotRetentionPeriodHasBeenSet(false),
    m_namespaceNameHasBeenSet(false)
{
}

Aws::String DeleteNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_finalSnapshotNameHasBeenSet)
  {
   payload.WithString("finalSnapshotName", m_finalSnapshotName);

  }

  if(m_finalSnapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("finalSnapshotRetentionPeriod", m_finalSnapshotRetentionPeriod);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteNamespaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.DeleteNamespace"));
  return headers;

}




