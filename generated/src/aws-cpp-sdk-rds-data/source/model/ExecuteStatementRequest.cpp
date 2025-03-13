/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ExecuteStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExecuteStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  if(m_includeResultMetadataHasBeenSet)
  {
   payload.WithBool("includeResultMetadata", m_includeResultMetadata);

  }

  if(m_continueAfterTimeoutHasBeenSet)
  {
   payload.WithBool("continueAfterTimeout", m_continueAfterTimeout);

  }

  if(m_resultSetOptionsHasBeenSet)
  {
   payload.WithObject("resultSetOptions", m_resultSetOptions.Jsonize());

  }

  if(m_formatRecordsAsHasBeenSet)
  {
   payload.WithString("formatRecordsAs", RecordsFormatTypeMapper::GetNameForRecordsFormatType(m_formatRecordsAs));
  }

  return payload.View().WriteReadable();
}




