/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeCachediSCSIVolumesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCachediSCSIVolumesRequest::DescribeCachediSCSIVolumesRequest() : 
    m_volumeARNsHasBeenSet(false)
{
}

Aws::String DescribeCachediSCSIVolumesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeARNsJsonList(m_volumeARNs.size());
   for(unsigned volumeARNsIndex = 0; volumeARNsIndex < volumeARNsJsonList.GetLength(); ++volumeARNsIndex)
   {
     volumeARNsJsonList[volumeARNsIndex].AsString(m_volumeARNs[volumeARNsIndex]);
   }
   payload.WithArray("VolumeARNs", std::move(volumeARNsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCachediSCSIVolumesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeCachediSCSIVolumes"));
  return headers;

}




