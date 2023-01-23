/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ImportServerCatalogRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportServerCatalogRequest::ImportServerCatalogRequest()
{
}

Aws::String ImportServerCatalogRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection ImportServerCatalogRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.ImportServerCatalog"));
  return headers;

}




