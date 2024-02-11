/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateVPCConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVPCConnectionRequest::UpdateVPCConnectionRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_vPCConnectionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dnsResolversHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateVPCConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_dnsResolversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsResolversJsonList(m_dnsResolvers.size());
   for(unsigned dnsResolversIndex = 0; dnsResolversIndex < dnsResolversJsonList.GetLength(); ++dnsResolversIndex)
   {
     dnsResolversJsonList[dnsResolversIndex].AsString(m_dnsResolvers[dnsResolversIndex]);
   }
   payload.WithArray("DnsResolvers", std::move(dnsResolversJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




