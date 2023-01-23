/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateDatalakeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatalakeRequest::UpdateDatalakeRequest() : 
    m_configurationsHasBeenSet(false)
{
}

Aws::String UpdateDatalakeRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




