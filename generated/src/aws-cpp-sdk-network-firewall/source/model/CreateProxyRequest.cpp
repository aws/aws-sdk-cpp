/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProxyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyNameHasBeenSet) {
    payload.WithString("ProxyName", m_proxyName);
  }

  if (m_natGatewayIdHasBeenSet) {
    payload.WithString("NatGatewayId", m_natGatewayId);
  }

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  if (m_listenerPropertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> listenerPropertiesJsonList(m_listenerProperties.size());
    for (unsigned listenerPropertiesIndex = 0; listenerPropertiesIndex < listenerPropertiesJsonList.GetLength();
         ++listenerPropertiesIndex) {
      listenerPropertiesJsonList[listenerPropertiesIndex].AsObject(m_listenerProperties[listenerPropertiesIndex].Jsonize());
    }
    payload.WithArray("ListenerProperties", std::move(listenerPropertiesJsonList));
  }

  if (m_tlsInterceptPropertiesHasBeenSet) {
    payload.WithObject("TlsInterceptProperties", m_tlsInterceptProperties.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateProxy"));
  return headers;
}
