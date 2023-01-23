/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DistributeDatasetEntriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DistributeDatasetEntriesRequest::DistributeDatasetEntriesRequest() : 
    m_datasetsHasBeenSet(false)
{
}

Aws::String DistributeDatasetEntriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetsJsonList(m_datasets.size());
   for(unsigned datasetsIndex = 0; datasetsIndex < datasetsJsonList.GetLength(); ++datasetsIndex)
   {
     datasetsJsonList[datasetsIndex].AsObject(m_datasets[datasetsIndex].Jsonize());
   }
   payload.WithArray("Datasets", std::move(datasetsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DistributeDatasetEntriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DistributeDatasetEntries"));
  return headers;

}




