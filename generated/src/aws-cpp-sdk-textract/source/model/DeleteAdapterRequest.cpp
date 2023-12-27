/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/DeleteAdapterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAdapterRequest::DeleteAdapterRequest() : 
    m_adapterIdHasBeenSet(false)
{
}

Aws::String DeleteAdapterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAdapterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.DeleteAdapter"));
  return headers;

}




