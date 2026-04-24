/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/UpdateProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProxyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_natGatewayIdHasBeenSet) {
    payload.WithString("NatGatewayId", m_natGatewayId);
  }

  if (m_proxyNameHasBeenSet) {
    payload.WithString("ProxyName", m_proxyName);
  }

  if (m_proxyArnHasBeenSet) {
    payload.WithString("ProxyArn", m_proxyArn);
  }

  if (m_listenerPropertiesToAddHasBeenSet) {
    Aws::Utils::Array<JsonValue> listenerPropertiesToAddJsonList(m_listenerPropertiesToAdd.size());
    for (unsigned listenerPropertiesToAddIndex = 0; listenerPropertiesToAddIndex < listenerPropertiesToAddJsonList.GetLength();
         ++listenerPropertiesToAddIndex) {
      listenerPropertiesToAddJsonList[listenerPropertiesToAddIndex].AsObject(
          m_listenerPropertiesToAdd[listenerPropertiesToAddIndex].Jsonize());
    }
    payload.WithArray("ListenerPropertiesToAdd", std::move(listenerPropertiesToAddJsonList));
  }

  if (m_listenerPropertiesToRemoveHasBeenSet) {
    Aws::Utils::Array<JsonValue> listenerPropertiesToRemoveJsonList(m_listenerPropertiesToRemove.size());
    for (unsigned listenerPropertiesToRemoveIndex = 0; listenerPropertiesToRemoveIndex < listenerPropertiesToRemoveJsonList.GetLength();
         ++listenerPropertiesToRemoveIndex) {
      listenerPropertiesToRemoveJsonList[listenerPropertiesToRemoveIndex].AsObject(
          m_listenerPropertiesToRemove[listenerPropertiesToRemoveIndex].Jsonize());
    }
    payload.WithArray("ListenerPropertiesToRemove", std::move(listenerPropertiesToRemoveJsonList));
  }

  if (m_tlsInterceptPropertiesHasBeenSet) {
    payload.WithObject("TlsInterceptProperties", m_tlsInterceptProperties.Jsonize());
  }

  if (m_updateTokenHasBeenSet) {
    payload.WithString("UpdateToken", m_updateToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateProxy"));
  return headers;
}
