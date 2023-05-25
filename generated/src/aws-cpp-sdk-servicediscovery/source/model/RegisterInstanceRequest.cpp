/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/RegisterInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterInstanceRequest::RegisterInstanceRequest() : 
    m_serviceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_creatorRequestId(Aws::Utils::UUID::RandomUUID()),
    m_creatorRequestIdHasBeenSet(true),
    m_attributesHasBeenSet(false)
{
}

Aws::String RegisterInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.RegisterInstance"));
  return headers;

}




