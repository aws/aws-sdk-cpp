/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/UpdateAdapterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAdapterRequest::UpdateAdapterRequest() : 
    m_adapterIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_adapterNameHasBeenSet(false),
    m_autoUpdate(AutoUpdate::NOT_SET),
    m_autoUpdateHasBeenSet(false)
{
}

Aws::String UpdateAdapterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_adapterNameHasBeenSet)
  {
   payload.WithString("AdapterName", m_adapterName);

  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithString("AutoUpdate", AutoUpdateMapper::GetNameForAutoUpdate(m_autoUpdate));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAdapterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.UpdateAdapter"));
  return headers;

}




