/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/RestoreTableFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreTableFromSnapshotRequest::RestoreTableFromSnapshotRequest() : 
    m_activateCaseSensitiveIdentifier(false),
    m_activateCaseSensitiveIdentifierHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String RestoreTableFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activateCaseSensitiveIdentifierHasBeenSet)
  {
   payload.WithBool("activateCaseSensitiveIdentifier", m_activateCaseSensitiveIdentifier);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_newTableNameHasBeenSet)
  {
   payload.WithString("newTableName", m_newTableName);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  if(m_sourceDatabaseNameHasBeenSet)
  {
   payload.WithString("sourceDatabaseName", m_sourceDatabaseName);

  }

  if(m_sourceSchemaNameHasBeenSet)
  {
   payload.WithString("sourceSchemaName", m_sourceSchemaName);

  }

  if(m_sourceTableNameHasBeenSet)
  {
   payload.WithString("sourceTableName", m_sourceTableName);

  }

  if(m_targetDatabaseNameHasBeenSet)
  {
   payload.WithString("targetDatabaseName", m_targetDatabaseName);

  }

  if(m_targetSchemaNameHasBeenSet)
  {
   payload.WithString("targetSchemaName", m_targetSchemaName);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreTableFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.RestoreTableFromSnapshot"));
  return headers;

}




