/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateLiveSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLiveSourceRequest::UpdateLiveSourceRequest() : 
    m_httpPackageConfigurationsHasBeenSet(false),
    m_liveSourceNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

Aws::String UpdateLiveSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_httpPackageConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> httpPackageConfigurationsJsonList(m_httpPackageConfigurations.size());
   for(unsigned httpPackageConfigurationsIndex = 0; httpPackageConfigurationsIndex < httpPackageConfigurationsJsonList.GetLength(); ++httpPackageConfigurationsIndex)
   {
     httpPackageConfigurationsJsonList[httpPackageConfigurationsIndex].AsObject(m_httpPackageConfigurations[httpPackageConfigurationsIndex].Jsonize());
   }
   payload.WithArray("HttpPackageConfigurations", std::move(httpPackageConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




