/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DeleteProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteProxyRequest::SerializePayload() const {
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DeleteProxy"));
  return headers;
}
