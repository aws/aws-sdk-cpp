/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddFlowVpcInterfacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddFlowVpcInterfacesRequest::AddFlowVpcInterfacesRequest() : 
    m_flowArnHasBeenSet(false),
    m_vpcInterfacesHasBeenSet(false)
{
}

Aws::String AddFlowVpcInterfacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcInterfacesJsonList(m_vpcInterfaces.size());
   for(unsigned vpcInterfacesIndex = 0; vpcInterfacesIndex < vpcInterfacesJsonList.GetLength(); ++vpcInterfacesIndex)
   {
     vpcInterfacesJsonList[vpcInterfacesIndex].AsObject(m_vpcInterfaces[vpcInterfacesIndex].Jsonize());
   }
   payload.WithArray("vpcInterfaces", std::move(vpcInterfacesJsonList));

  }

  return payload.View().WriteReadable();
}




