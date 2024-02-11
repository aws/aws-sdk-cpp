/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/DiscoverInstancesRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DiscoverInstancesRevisionRequest::DiscoverInstancesRevisionRequest() : 
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String DiscoverInstancesRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("NamespaceName", m_namespaceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DiscoverInstancesRevisionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.DiscoverInstancesRevision"));
  return headers;

}




