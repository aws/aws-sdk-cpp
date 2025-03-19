/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdateDirectQueryDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDirectQueryDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithObject("DataSourceType", m_dataSourceType.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_openSearchArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> openSearchArnsJsonList(m_openSearchArns.size());
   for(unsigned openSearchArnsIndex = 0; openSearchArnsIndex < openSearchArnsJsonList.GetLength(); ++openSearchArnsIndex)
   {
     openSearchArnsJsonList[openSearchArnsIndex].AsString(m_openSearchArns[openSearchArnsIndex]);
   }
   payload.WithArray("OpenSearchArns", std::move(openSearchArnsJsonList));

  }

  return payload.View().WriteReadable();
}




