/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeLayersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLayersRequest::DescribeLayersRequest() : 
    m_stackIdHasBeenSet(false),
    m_layerIdsHasBeenSet(false)
{
}

Aws::String DescribeLayersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_layerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layerIdsJsonList(m_layerIds.size());
   for(unsigned layerIdsIndex = 0; layerIdsIndex < layerIdsJsonList.GetLength(); ++layerIdsIndex)
   {
     layerIdsJsonList[layerIdsIndex].AsString(m_layerIds[layerIdsIndex]);
   }
   payload.WithArray("LayerIds", std::move(layerIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLayersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeLayers"));
  return headers;

}




