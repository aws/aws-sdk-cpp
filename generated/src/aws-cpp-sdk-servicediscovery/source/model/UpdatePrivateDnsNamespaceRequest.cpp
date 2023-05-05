/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePrivateDnsNamespaceRequest::UpdatePrivateDnsNamespaceRequest() : 
    m_idHasBeenSet(false),
    m_updaterRequestId(Aws::Utils::UUID::PseudoRandomUUID()),
    m_updaterRequestIdHasBeenSet(true),
    m_namespaceHasBeenSet(false)
{
}

Aws::String UpdatePrivateDnsNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_updaterRequestIdHasBeenSet)
  {
   payload.WithString("UpdaterRequestId", m_updaterRequestId);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithObject("Namespace", m_namespace.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePrivateDnsNamespaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.UpdatePrivateDnsNamespace"));
  return headers;

}




