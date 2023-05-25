/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/CreateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceRequest::CreateServiceRequest() : 
    m_nameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_creatorRequestId(Aws::Utils::UUID::RandomUUID()),
    m_creatorRequestIdHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_healthCheckCustomConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(ServiceTypeOption::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("NamespaceId", m_namespaceId);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dnsConfigHasBeenSet)
  {
   payload.WithObject("DnsConfig", m_dnsConfig.Jsonize());

  }

  if(m_healthCheckConfigHasBeenSet)
  {
   payload.WithObject("HealthCheckConfig", m_healthCheckConfig.Jsonize());

  }

  if(m_healthCheckCustomConfigHasBeenSet)
  {
   payload.WithObject("HealthCheckCustomConfig", m_healthCheckCustomConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ServiceTypeOptionMapper::GetNameForServiceTypeOption(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.CreateService"));
  return headers;

}




