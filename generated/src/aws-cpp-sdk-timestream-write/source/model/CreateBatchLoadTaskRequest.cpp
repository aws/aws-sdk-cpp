/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/CreateBatchLoadTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBatchLoadTaskRequest::CreateBatchLoadTaskRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dataModelConfigurationHasBeenSet(false),
    m_dataSourceConfigurationHasBeenSet(false),
    m_reportConfigurationHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_recordVersion(0),
    m_recordVersionHasBeenSet(false)
{
}

Aws::String CreateBatchLoadTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_dataModelConfigurationHasBeenSet)
  {
   payload.WithObject("DataModelConfiguration", m_dataModelConfiguration.Jsonize());

  }

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_reportConfigurationHasBeenSet)
  {
   payload.WithObject("ReportConfiguration", m_reportConfiguration.Jsonize());

  }

  if(m_targetDatabaseNameHasBeenSet)
  {
   payload.WithString("TargetDatabaseName", m_targetDatabaseName);

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("TargetTableName", m_targetTableName);

  }

  if(m_recordVersionHasBeenSet)
  {
   payload.WithInt64("RecordVersion", m_recordVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBatchLoadTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.CreateBatchLoadTask"));
  return headers;

}




