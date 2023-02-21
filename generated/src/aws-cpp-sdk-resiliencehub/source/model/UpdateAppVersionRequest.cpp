/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateAppVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppVersionRequest::UpdateAppVersionRequest() : 
    m_additionalInfoHasBeenSet(false),
    m_appArnHasBeenSet(false)
{
}

Aws::String UpdateAppVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_additionalInfoHasBeenSet)
  {
   JsonValue additionalInfoJsonMap;
   for(auto& additionalInfoItem : m_additionalInfo)
   {
     Aws::Utils::Array<JsonValue> additionalInfoValueListJsonList(additionalInfoItem.second.size());
     for(unsigned additionalInfoValueListIndex = 0; additionalInfoValueListIndex < additionalInfoValueListJsonList.GetLength(); ++additionalInfoValueListIndex)
     {
       additionalInfoValueListJsonList[additionalInfoValueListIndex].AsString(additionalInfoItem.second[additionalInfoValueListIndex]);
     }
     additionalInfoJsonMap.WithArray(additionalInfoItem.first, std::move(additionalInfoValueListJsonList));
   }
   payload.WithObject("additionalInfo", std::move(additionalInfoJsonMap));

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  return payload.View().WriteReadable();
}




