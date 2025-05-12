/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/CreateDataLakeDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataLakeDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("schema", m_schema.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_partitionSpecHasBeenSet)
  {
   payload.WithObject("partitionSpec", m_partitionSpec.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




