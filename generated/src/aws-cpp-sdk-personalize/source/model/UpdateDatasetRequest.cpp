/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/UpdateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatasetRequest::UpdateDatasetRequest() : 
    m_datasetArnHasBeenSet(false),
    m_schemaArnHasBeenSet(false)
{
}

Aws::String UpdateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("schemaArn", m_schemaArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.UpdateDataset"));
  return headers;

}




