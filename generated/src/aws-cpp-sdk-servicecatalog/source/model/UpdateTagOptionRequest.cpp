/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdateTagOptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTagOptionRequest::UpdateTagOptionRequest() : 
    m_idHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
}

Aws::String UpdateTagOptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTagOptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateTagOption"));
  return headers;

}




