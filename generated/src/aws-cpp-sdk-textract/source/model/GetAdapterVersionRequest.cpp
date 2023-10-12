/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/GetAdapterVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAdapterVersionRequest::GetAdapterVersionRequest() : 
    m_adapterIdHasBeenSet(false),
    m_adapterVersionHasBeenSet(false)
{
}

Aws::String GetAdapterVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_adapterVersionHasBeenSet)
  {
   payload.WithString("AdapterVersion", m_adapterVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAdapterVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.GetAdapterVersion"));
  return headers;

}




