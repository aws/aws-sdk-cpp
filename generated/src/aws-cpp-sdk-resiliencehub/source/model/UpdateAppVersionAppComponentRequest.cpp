/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateAppVersionAppComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppVersionAppComponentRequest::UpdateAppVersionAppComponentRequest() : 
    m_additionalInfoHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateAppVersionAppComponentRequest::SerializePayload() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload.View().WriteReadable();
}




