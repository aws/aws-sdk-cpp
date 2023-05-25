/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/CreateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTableRequest::CreateTableRequest() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_retentionPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_magneticStoreWritePropertiesHasBeenSet(false)
{
}

Aws::String CreateTableRequest::SerializePayload() const
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

  if(m_retentionPropertiesHasBeenSet)
  {
   payload.WithObject("RetentionProperties", m_retentionProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_magneticStoreWritePropertiesHasBeenSet)
  {
   payload.WithObject("MagneticStoreWriteProperties", m_magneticStoreWriteProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.CreateTable"));
  return headers;

}




