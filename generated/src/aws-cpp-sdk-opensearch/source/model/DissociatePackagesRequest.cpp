/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DissociatePackagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DissociatePackagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> packageListJsonList(m_packageList.size());
   for(unsigned packageListIndex = 0; packageListIndex < packageListJsonList.GetLength(); ++packageListIndex)
   {
     packageListJsonList[packageListIndex].AsString(m_packageList[packageListIndex]);
   }
   payload.WithArray("PackageList", std::move(packageListJsonList));

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload.View().WriteReadable();
}




