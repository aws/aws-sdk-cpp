/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateDataLakeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataLakeRequest::UpdateDataLakeRequest() : 
    m_configurationsHasBeenSet(false),
    m_metaStoreManagerRoleArnHasBeenSet(false)
{
}

Aws::String UpdateDataLakeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("configurations", std::move(configurationsJsonList));

  }

  if(m_metaStoreManagerRoleArnHasBeenSet)
  {
   payload.WithString("metaStoreManagerRoleArn", m_metaStoreManagerRoleArn);

  }

  return payload.View().WriteReadable();
}




