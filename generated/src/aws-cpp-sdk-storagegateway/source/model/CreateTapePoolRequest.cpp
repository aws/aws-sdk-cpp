/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CreateTapePoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTapePoolRequest::CreateTapePoolRequest() : 
    m_poolNameHasBeenSet(false),
    m_storageClass(TapeStorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_retentionLockType(RetentionLockType::NOT_SET),
    m_retentionLockTypeHasBeenSet(false),
    m_retentionLockTimeInDays(0),
    m_retentionLockTimeInDaysHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTapePoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", TapeStorageClassMapper::GetNameForTapeStorageClass(m_storageClass));
  }

  if(m_retentionLockTypeHasBeenSet)
  {
   payload.WithString("RetentionLockType", RetentionLockTypeMapper::GetNameForRetentionLockType(m_retentionLockType));
  }

  if(m_retentionLockTimeInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionLockTimeInDays", m_retentionLockTimeInDays);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTapePoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateTapePool"));
  return headers;

}




