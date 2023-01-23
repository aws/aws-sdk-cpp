/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/BatchExecuteStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchExecuteStatementRequest::BatchExecuteStatementRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_clusterIdentifierHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sqlsHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String BatchExecuteStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_sqlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sqlsJsonList(m_sqls.size());
   for(unsigned sqlsIndex = 0; sqlsIndex < sqlsJsonList.GetLength(); ++sqlsIndex)
   {
     sqlsJsonList[sqlsIndex].AsString(m_sqls[sqlsIndex]);
   }
   payload.WithArray("Sqls", std::move(sqlsJsonList));

  }

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_withEventHasBeenSet)
  {
   payload.WithBool("WithEvent", m_withEvent);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("WorkgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchExecuteStatementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftData.BatchExecuteStatement"));
  return headers;

}




