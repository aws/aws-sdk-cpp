/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DescribeTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTableRequest::DescribeTableRequest() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

Aws::String DescribeTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.DescribeTable"));
  return headers;

}




