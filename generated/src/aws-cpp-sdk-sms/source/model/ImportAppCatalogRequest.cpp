/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ImportAppCatalogRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportAppCatalogRequest::ImportAppCatalogRequest() : 
    m_roleNameHasBeenSet(false)
{
}

Aws::String ImportAppCatalogRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportAppCatalogRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.ImportAppCatalog"));
  return headers;

}




