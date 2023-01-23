/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeElasticIpsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeElasticIpsRequest::DescribeElasticIpsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_ipsHasBeenSet(false)
{
}

Aws::String DescribeElasticIpsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_ipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipsJsonList(m_ips.size());
   for(unsigned ipsIndex = 0; ipsIndex < ipsJsonList.GetLength(); ++ipsIndex)
   {
     ipsJsonList[ipsIndex].AsString(m_ips[ipsIndex]);
   }
   payload.WithArray("Ips", std::move(ipsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeElasticIpsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeElasticIps"));
  return headers;

}




