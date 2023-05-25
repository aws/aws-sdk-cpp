/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/UpdateDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatabaseRequest::UpdateDatabaseRequest() : 
    m_databaseNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String UpdateDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.UpdateDatabase"));
  return headers;

}




