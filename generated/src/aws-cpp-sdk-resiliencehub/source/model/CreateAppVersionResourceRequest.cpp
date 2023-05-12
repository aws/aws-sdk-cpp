/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/CreateAppVersionResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppVersionResourceRequest::CreateAppVersionResourceRequest() : 
    m_additionalInfoHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_appComponentsHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String CreateAppVersionResourceRequest::SerializePayload() const
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

  if(m_appComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appComponentsJsonList(m_appComponents.size());
   for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
   {
     appComponentsJsonList[appComponentsIndex].AsString(m_appComponents[appComponentsIndex]);
   }
   payload.WithArray("appComponents", std::move(appComponentsJsonList));

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithString("physicalResourceId", m_physicalResourceId);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload.View().WriteReadable();
}




