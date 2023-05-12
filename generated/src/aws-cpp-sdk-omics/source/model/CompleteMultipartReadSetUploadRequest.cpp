/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CompleteMultipartReadSetUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompleteMultipartReadSetUploadRequest::CompleteMultipartReadSetUploadRequest() : 
    m_sequenceStoreIdHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_partsHasBeenSet(false)
{
}

Aws::String CompleteMultipartReadSetUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_partsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partsJsonList(m_parts.size());
   for(unsigned partsIndex = 0; partsIndex < partsJsonList.GetLength(); ++partsIndex)
   {
     partsJsonList[partsIndex].AsObject(m_parts[partsIndex].Jsonize());
   }
   payload.WithArray("parts", std::move(partsJsonList));

  }

  return payload.View().WriteReadable();
}




