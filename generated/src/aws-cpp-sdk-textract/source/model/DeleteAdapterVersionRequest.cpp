/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/DeleteAdapterVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAdapterVersionRequest::DeleteAdapterVersionRequest() : 
    m_adapterIdHasBeenSet(false),
    m_adapterVersionHasBeenSet(false)
{
}

Aws::String DeleteAdapterVersionRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DeleteAdapterVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.DeleteAdapterVersion"));
  return headers;

}




