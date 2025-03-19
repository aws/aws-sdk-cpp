/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_dataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
   }
   payload.WithArray("dataSources", std::move(dataSourcesJsonList));

  }

  if(m_iamIdentityCenterOptionsHasBeenSet)
  {
   payload.WithObject("iamIdentityCenterOptions", m_iamIdentityCenterOptions.Jsonize());

  }

  if(m_appConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appConfigsJsonList(m_appConfigs.size());
   for(unsigned appConfigsIndex = 0; appConfigsIndex < appConfigsJsonList.GetLength(); ++appConfigsIndex)
   {
     appConfigsJsonList[appConfigsIndex].AsObject(m_appConfigs[appConfigsIndex].Jsonize());
   }
   payload.WithArray("appConfigs", std::move(appConfigsJsonList));

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("tagList", std::move(tagListJsonList));

  }

  return payload.View().WriteReadable();
}




