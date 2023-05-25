/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateDatasetExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetExportJobRequest::CreateDatasetExportJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_ingestionMode(IngestionMode::NOT_SET),
    m_ingestionModeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_jobOutputHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDatasetExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_ingestionModeHasBeenSet)
  {
   payload.WithString("ingestionMode", IngestionModeMapper::GetNameForIngestionMode(m_ingestionMode));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_jobOutputHasBeenSet)
  {
   payload.WithObject("jobOutput", m_jobOutput.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateDatasetExportJob"));
  return headers;

}




