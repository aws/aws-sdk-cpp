/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateEndpointAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointAccessRequest::UpdateEndpointAccessRequest() : 
    m_endpointNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Aws::String UpdateEndpointAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("endpointName", m_endpointName);

  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
   for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
   {
     vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
   }
   payload.WithArray("vpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointAccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateEndpointAccess"));
  return headers;

}




