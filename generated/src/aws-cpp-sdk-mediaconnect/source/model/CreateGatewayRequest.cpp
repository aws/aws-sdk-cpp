/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/CreateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGatewayRequest::CreateGatewayRequest() : 
    m_egressCidrBlocksHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networksHasBeenSet(false)
{
}

Aws::String CreateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_egressCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> egressCidrBlocksJsonList(m_egressCidrBlocks.size());
   for(unsigned egressCidrBlocksIndex = 0; egressCidrBlocksIndex < egressCidrBlocksJsonList.GetLength(); ++egressCidrBlocksIndex)
   {
     egressCidrBlocksJsonList[egressCidrBlocksIndex].AsString(m_egressCidrBlocks[egressCidrBlocksIndex]);
   }
   payload.WithArray("egressCidrBlocks", std::move(egressCidrBlocksJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networksJsonList(m_networks.size());
   for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
   {
     networksJsonList[networksIndex].AsObject(m_networks[networksIndex].Jsonize());
   }
   payload.WithArray("networks", std::move(networksJsonList));

  }

  return payload.View().WriteReadable();
}




