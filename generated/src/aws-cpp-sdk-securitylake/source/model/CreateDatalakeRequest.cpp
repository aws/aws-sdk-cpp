/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateDatalakeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatalakeRequest::CreateDatalakeRequest() : 
    m_configurationsHasBeenSet(false),
    m_enableAll(false),
    m_enableAllHasBeenSet(false),
    m_metaStoreManagerRoleArnHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

Aws::String CreateDatalakeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationsHasBeenSet)
  {
   JsonValue configurationsJsonMap;
   for(auto& configurationsItem : m_configurations)
   {
     configurationsJsonMap.WithObject(RegionMapper::GetNameForRegion(configurationsItem.first), configurationsItem.second.Jsonize());
   }
   payload.WithObject("configurations", std::move(configurationsJsonMap));

  }

  if(m_enableAllHasBeenSet)
  {
   payload.WithBool("enableAll", m_enableAll);

  }

  if(m_metaStoreManagerRoleArnHasBeenSet)
  {
   payload.WithString("metaStoreManagerRoleArn", m_metaStoreManagerRoleArn);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(RegionMapper::GetNameForRegion(m_regions[regionsIndex]));
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  return payload.View().WriteReadable();
}




